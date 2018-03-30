"""
To find the point of intersection of 2 linked lists.
Naive approach = O(m * n), for each in m, check if n matches.

Difference approach -- linear with no extra space.

***CHECK GEEKSFORGEEKS FOR MORE SOLUTIONS
"""

* Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        int count1 = 0, count2 = 0, diff;
         ListNode * ta = headA;
         ListNode * tb = headB;
        if( ta == NULL || tb == NULL) // empty list
            return NULL;
        while(ta != NULL)
        {
            count1++;       // counting number of nodes in LL1
            ta = ta->next;
        }

        while(tb != NULL)  // number of nodes in LL2
        {
            count2++;
            tb = tb->next;
        }

        ta = headA; // reset pointers
        tb = headB;

        if(count1 > count2)
            diff = count1 - count2;   // find the difference
        else
            diff = count2 - count1;

        if( diff != 0 && (count1 > count2))  // move the pointer of the longer node by difference number of times, so that they point to the same node after a while.
        {
            for(int i = 0; i < diff ; i++)
            {
             if( ta == NULL)
                 return NULL;
             ta = ta->next;
            }
        }
        else if (diff != 0 && (count1 < count2))
        {
            for( int i = 0 ; i < diff; i++)
            {
                if( tb == NULL)
                    return NULL;
                tb = tb->next;
            }
        }
        while(ta != NULL && tb != NULL) // compare. If intersection exists, return the node, else return NULL
        {
            if(ta == tb)
                return ta;
            ta = ta->next;
            tb = tb->next;
        }
        return NULL;


    }
};
