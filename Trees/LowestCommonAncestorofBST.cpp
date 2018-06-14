/*
Node is defined as

typedef struct node
{
	int data;
	node *left;
	node *right;
}node;



*/


node *lca(node *root, int n1,int n2)
{

    if(root == NULL)
         return NULL;
     if(root->data > max(n1,n2)) // this implies that both the numbers are to the left of the current root
         return lca(root->left,n1,n2);
    else if(root->data < min(n1,n2)) // both are to the right of the current root
         return lca(root->right,n1,n2);

    else
        return root; // if n1 <= root <= n2, this is the LCA
	
}
