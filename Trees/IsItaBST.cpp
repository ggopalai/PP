/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.

The Node struct is defined as follows:
	struct Node {
		int data;
		Node* left;
		Node* right;
	}

A few test cases are sstill failing for this tho.
INT16_MIN = max integer value with 16 bits
Case with node value == INT16_MAX - failing. Not able to seperate that into differetn case.
Case with all negative values - failing.

  Another approach : Store the inorder traversal in a vector. This MUST be strictly increasing. ss
 */

bool range(Node * root, int low, int high)
{
    if(root == NULL)
        return true;
    else if( root->data <= low || root->data >= high)
        return false;
    else
    return (range(root->left,low,root->data) && range(root->right,root->data,high));
}

bool checkBST(Node* root) {

           return range(root,INT8_MIN,INT8_MAX);

	}
