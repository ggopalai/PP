"""
Removing duplicates from sorted linked list.

"""

ListNode* Solution::deleteDuplicates(ListNode* A) {

    ListNode *a, *b;
    a = A;
    b = A;
    if(A == NULL)
        return NULL;
    while(a->next != NULL)
    {
        a = a->next;  // to check next value
        if(b->val == a->val)
        {
            b->next = a->next;  // changing the link
            a = b;
        }
        b = a;
    }
    return A;
}
