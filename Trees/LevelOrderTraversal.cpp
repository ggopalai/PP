/*
So, trying to print out a binary tree using level order traversal.
Done using queue.
This is like the bfs traversal for graphs.
So, when we are at a node, print it, then enqueue its child nodes. (first left then right)
Repeat until Q is empty.
O(N) time complexity.
Space - at max, the queue holds all the leaf nodes. So, N/2 at max;
*/

void levelOrder(node * root)
{
    queue<node*> q; //creating a queue to hold pointers to nodes

    q.push(root); // pushing the root pointer

    while(!q.empty()) //until there are elements in the Q
    {
      node * p = q.front(); // in order of being pushed
      if(p->left)
        q.push(p->left); // enqueue left
      if(p->right)
        q.push(p->right); // enqueue right

      cout << p->val << " "; // print
      q.pop(); // pop from queue
    }

}
