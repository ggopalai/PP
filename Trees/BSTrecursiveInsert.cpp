#include<iostream>
#include<malloc.h>
using namespace std;

typedef struct Node {

         int val;
         struct Node * left;
         struct Node * right;

} node;

node * create(int val)
{
    node * temp = (node *)malloc(sizeof(node));
    temp->val = val;
    temp->right = NULL;
    temp->left = NULL;

    return temp;
}

node * recurIns(node * head, int val)
{
   node * p = create(val);

   if(head == NULL)
        return p;
   else if(val > head->val)
        head->right = recurIns(head->right,val);
   else
        head->left = recurIns(head->left,val);

   return head;
}




void Inorder(node * head)
{
    if(head == NULL)
        return;
    else
    {
        Inorder(head->left);
        cout << head->val << " ";
        Inorder(head->right);
    }
}


int main()
{
    node * head = NULL;
    head = recurIns(head,5);
    head = recurIns(head,2);
    head = recurIns(head,10);
    head = recurIns(head,1);
    head = recurIns(head,3);

    cout << " Inorder : ";
    Inorder(head);
    cout << endl;
}
