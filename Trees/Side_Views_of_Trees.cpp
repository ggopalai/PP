/*
Side views are basically to print the first(or last) nodes of respective levels.
Done by keeping track of the level and a max_level.


*/

void rightView(node * head, int level, int * max_level)
{
    if(head == NULL)
        return;

    if(level > *max_level) // first node condition, fails for rest of the node in same level.
    {
        cout << head->val << " ";
        *max_level = level;
    }

    rightView(head->right,level+1,max_level); // interchange the order fro left view 
    rightView(head->left,level+1,max_level);

}

int main()
{
   int max_level = 0;
   rightView(head,1,&max_level); // 1 is the level of the tree
}
