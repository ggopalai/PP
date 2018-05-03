"""
Trying to find the range of a given integer in a sorted array.
Binary search, then extend on both sides to find the indexes.
"""

vector<int> Solution::searchRange(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> t;
    if(A.size()==0) // corner case
        return t;
    int high = A.size()-1;
    int low = 0, mid;
    while( low <= high) // binary
    {
        mid = (low + high)/2;
        if( A[mid] == B) // if found,
        {
            int i = mid+1, j= mid -1;
            while(A[i] == B) // finding the higher index on the RHS
                i++;
            i--;
            while(A[j] == B) // finding the lower index in the LHS
                j--;
            j++;
            t.push_back(j); // push the found indices
            t.push_back(i);
            return t;
        }
        else if( A[mid] < B)
            low = mid + 1;
        else
            high = mid - 1;
    }
    t.push_back(-1); // number not found
    t.push_back(-1);
    return t;

}
