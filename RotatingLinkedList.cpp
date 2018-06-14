//To rotate Linked List by the given number. As in, rotating by one would be making the the last node the header. 

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {

    ListNode *back, *front, *temp, *count;
    back  = A;
    front = A;
    count = A;
    int c=0;
    if(A == NULL)  //empty list
        return NULL;
    if(A->next == NULL)  // single list
        return A;

    while(count!=NULL)  // count number of nodes
    {
        c++;
        count = count->next;
    }

    int move = B % c; // the actual moves to rotate by, in case of number being greater than size of LL
    for(int i = 0; i < move; i++)
    {
        if(front == NULL)
            return A->next;
        else
            front = front->next;
    }

    while(front->next != NULL) // moving second pointer ahead
    {
        front = front->next;
        back = back->next;
    }

    front->next = A; //final modifications
    temp = back->next;
    back->next = NULL;

    return temp;


}
