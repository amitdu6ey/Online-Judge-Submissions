Question : Convert Linked List[1, 2, 3, 4, 5, 6, 7, 8, 9] = > [ 1, 9, 2, 8, 3, 7, 4, 6, 5 ];

// Execution Starts in jumbleList function

class Solution
{
public:
    ListNode *listReverse(ListNode *head, ListNode *prevNode)
    {
        if (head == NULL)
            return prevNode;
        ListNode *nextNode = head->next;
        head->next = prevNode;
        return listReverse(nextNode, head);
    }

    int length(ListNode *head)
    {
        int len = 0;
        ListNode *iter = head;
        while (iter != NULL)
            iter = iter->next, len++;
        iter = head;
        return len;
    }

    ListNode *merge(ListNode *iter1, ListNode *iter2)
    {
        if (iter1 == NULL and iter2 != NULL)
            return iter2;
        if (iter1 != NULL and iter2 == NULL)
            return iter1;
        if (iter1 == NULL and iter2 != NULL)
            return NULL;
        iter2->next = merge(iter1->next, iter2->next);
        iter1->next = iter2;
        return iter1;
    }

    ListNode *jumbleList(ListNode *head)
    {
        ListNode *iter = head;
        int len = length(iter);
        for (int i = 0; i < len / 2 - 1; i++)
            iter = iter->next;
        ListNode *tmp = iter;
        iter = tmp->next;
        tmp->next = NULL;
        iter = listReverse(iter, NULL);
        return merge(head, iter);
    }
};

Question : Remove BST keys outside the given range[L, R];

node *removeOutsideRange(node *root, int min, int max)
{
    if (root == NULL)
        return NULL;
    root->left = removeOutsideRange(root->left, min, max);
    root->right = removeOutsideRange(root->right, min, max);
    if (root->key > max)
        return removeOutsideRange(root->left, min, max);
    if (root->key < min)
        return removeOutsideRange(root->right, min, max);
    return root;
}

Question : www.spoj.com / problems / AGGRCOW;

#include <bits/stdc++.h>

using namespace std;

int n, c;
vector<int> a;

int f(int x)
{
    int cows = 1, lastpos = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] - lastpos >= x)
        {
            cows++;
            lastpos = a[i];
        }
        if (cows >= c)
            return 1;
    }
    return 0;
}

void solve()
{
    cin >> n >> c;
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int l = 0, r = a[n - 1] - a[0] + 1, mid;
    while (r - l > 1)
    {
        mid = (l + r) / 2;
        if (f(mid) == 0)
            r = mid;
        else
            l = mid;
    }
    cout << l << endl;
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}