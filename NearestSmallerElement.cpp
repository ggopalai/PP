// To find the nearest smaller element.
// naive - n square.
//so use stacks
// the basic ideology is to pop off the stack those elements that would never be chosen as answer.
// rules : the index needs to be lesser than current index, and value needs to be smaller. thus, recently pushed is the nearest

vector<int> Solution::prevSmaller(vector<int> &A) {

    vector<int> res;
    int flag;
    stack<int> s;
    for(int i = 0; i < A.size(); i++)
    {
        while( !s.empty() && (s.top() >= A[i])) s.pop(); //if stack not empty, and value greater, pop off.
        if(s.empty())
            res.push_back(-1); // if nothing left, -1
        else
            res.push_back(s.top()); // the first remaining, is the closest.

        s.push(A[i]);
    }


    return res;
}
