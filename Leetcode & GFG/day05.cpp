206. Reverse Linked List

// iterative
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prevNode = NULL;
        while(head != NULL){
            ListNode* nextNode = head->next;
            head->next = prevNode;
            prevNode = head;
            head = nextNode;
        }
        return prevNode;
    }
};

// recursive
class Solution {
public:
    ListNode* listReverse(ListNode* head, ListNode* prevNode){
        if(head == NULL) return prevNode;
        ListNode* nextNode = head->next;
        head->next = prevNode;
        return listReverse(nextNode, head);
    }
    ListNode* reverseList(ListNode* head) {
            return listReverse(head, NULL);
    }
};


876. Middle of the Linked List

// Normal Approach
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int len=0;
        ListNode* start = head; 
        while(head!=NULL){
            head = head->next;
            len++;
        }
        cout<<len;
        int cur = 1;
        head = start;
        while( cur <= len/2){
            head = head->next;
            cur++;
        }
        return head;
    }
};

// Fast and Slow Pointer

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* r = head;
        ListNode* t = head;
        while(r != NULL and r->next != NULL){
            r = r->next->next;
            t = t->next;
        }
        return t;
    }
};

