#include<iostream>
#include<malloc.h>
using namespace std;

typedef struct Node {   //node for tree

         int val;
         struct Node * left;
         struct Node * right;

} node;

node * insert(node * head, int val)
{
    node * p = (node*)malloc(sizeof(node)); // allocate memory for node
    p->left = NULL;
    p->right = NULL;
    p->val = val; // set val
    node *prev, * temp;
    prev = NULL;
    temp = head;
    if(head == NULL) //empty tree
    {
        head = p;
        return head;
    }
    else
    {
        while(temp != NULL)
          {
              if(temp->val < val)
              {
                  prev = temp;
                  temp = temp->right;
              }
              else
              {
                  prev = temp;
                  temp = temp->left;
              }

         }

         if(val > prev->val)
               prev->right = p;
        else
               prev->left = p;

          return head;
     }
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

void preOrder(node * head)
{
    if(head == NULL)
        return;
    else
    {
        cout << head->val << " ";
        preOrder(head->left);
        preOrder(head->right);
    }
}

void postOrder(node * head)
{
    if(head == NULL)
        return;
    else
    {
        postOrder(head->left);

        postOrder(head->right);
        cout << head->val << " ";
    }
}

int main()
{
    node * head = NULL;
    head = insert(head,5);
    head = insert(head,2);
    head = insert(head,10);
    head = insert(head,1);
    head = insert(head,3);

    cout << " Inorder : ";
    Inorder(head);
    cout << endl;

    cout << " Preorder :";
    preOrder(head);
    cout << endl;

    cout << "Postorder ";
    postOrder(head);

    return 1;
}
