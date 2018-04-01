"""
Given a sorted array, and an integer, return the index where the integer needs to be inserted. (Not found)
If found, return the position.
Best method - binary search - log n

"""

int Solution::searchInsert(vector<int> &A, int B) {

    if(A.size() == 0)  // corner case, empty array
        return 0;
    if(A.size() == 1) // corner case, single element
    {
        if(B <= A[0]) // takes care of equal case also
            return 0;
        else
            return 1;
    }
    int mid;
    int low = 0;
    int high = A.size()-1;
    while(low <= high)   // binary search
    {
        mid =(low + high)/2;
        if(A[mid] == B)
            return mid;   // return index when found
        else if (A[mid] > B)
            high = mid - 1;
        else
            low = mid + 1;
    }
    if(B > A[mid])  // when not found
        return mid+1;  // next to the last mid position
    else
        return mid; // the last mid postion, only the next elements get shifted.

}
