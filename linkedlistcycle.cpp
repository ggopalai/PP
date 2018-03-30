"""
To find cycle in linked list. Fast and slow pointer method.
"""

bool hasCycle(ListNode *head) {

        ListNode * fast, * slow;
        fast = head;
        slow = head;

        if(head == NULL)
            return false;

        while( fast->next != NULL && fast->next->next != NULL) // first case for a single node. second for general cases ( 2 or more)
        {
           fast = fast->next->next; 
           slow = slow->next;
           if(slow == fast)
               return true;

        }


        return false;

    }
