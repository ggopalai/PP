/* To remove the Nth element from the end, using only one pass.



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode * headA;
        ListNode * headB;

        int count = 0;

        headA = head;
        headB = head;

        if(head == NULL)
            return  NULL;

        ListNode * temp = head;
        while(temp != NULL)  //0 node cases
        {
            count++;
            temp = temp->next;
        }

        if(count == 1) //single node
            return NULL;

        if(n == 1) // for removing the last node
        {

            while(headA->next->next != NULL)
                headA = headA->next;
            headA->next = headA->next->next;

            return head;

        }

        if(count == n) //remove first node
        {
            head = head->next;
            return head;
        }

        // any other node in between

        
        for(int i = 0; i < n; i++)
        {
            headA = headA->next;
        }

        while(headA->next!=NULL)
        {
            headA = headA->next;
            headB = headB->next;
        }

        headB->next = headB->next->next;

        return head;


    }
};
