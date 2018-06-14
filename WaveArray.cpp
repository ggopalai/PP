/*Given an array of integers, sort the array into a wave like array and return it,
In other words, arrange the elements into a sequence such that a1 >= a2 <= a3 >= a4 <= a5.....
InterviewBit - Arrays
*/

vector<int> Solution::wave(vector<int> &A) {

    sort(A.begin(),A.end()); // sort

    int temp;

    for(int i = 0 ; i < A.size()-1; i+=2) // swap corresponding elemeents 
    {
        temp = A[i];
        A[i] = A[i+1];
        A[i+1] = temp;
    }

    return A;

}
