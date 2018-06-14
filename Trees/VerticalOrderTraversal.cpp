/*
Vertical Order traversal of a tree
Time : O(nlog(n)) - n * time to retrieve from map( logn in this case because of maps being a balanced bst in c++)
using the horizontal distance as the key, store all the vectors corresponding to that key.

*/

void getVerticalOrder(node * root, int hd, map <int,vector<int> > &m)
{
    if(root == NULL) // base case
        return;

    m[hd].push_back(root->val); // adding the value into the hd vector

    getVerticalOrder(root->left,hd-1,m); // calling for left child with hd - 1
    getVerticalOrder(root->right,hd+1,m); // hd + 1

}

void printVerticalOrder(node * root)
{
    map<int, vector<int> > m;

    int hd = 0;
    getVerticalOrder(root,hd,m);

    map<int, vector<int> > :: iterator i;
    for(i = m.begin(); i != m.end(); i++) // through the keys
    {
        for(int j = 0; j < i->second.size(); j++) // through the vector
        {
            cout << i->second[j] << " "; // prin the values
        }
        cout << endl;
    }

}


int main()
{
    node * head = NULL;
    head = recurIns(head,5);
    head = recurIns(head,3);
    head = recurIns(head,2);
    head = recurIns(head,1);
    head = recurIns(head,10);
    head = recurIns(head,6);


     printVerticalOrder(head);

}
