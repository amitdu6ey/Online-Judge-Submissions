Question : Convert Linked List[1, 2, 3, 4, 5, 6, 7, 8, 9] = > [ 1, 9, 2, 8, 3, 7, 4, 6, 5 ]

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
