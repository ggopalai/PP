/*
lONGEST COMMON subsequence(chars need not be contiguos)
The normal recursive solution solves in O(2^n+m) - worst case, no chars equal
Recursive + memoization - improves to O(n*m)
Bottom up - array of n * m - O(n*m) ?
*/
//Top down
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int lcs(string A, string B, int p, int q)
{

    if(p < 0 || q < 0)
        return 0;
    else if(A[p] == B[q])
        return (1 + lcs(A,B,p-1,q-1)); // if last char is same
    else
        return max(lcs(A,B,p-1,q),lcs(A,B,p,q-1)); // not the same, return max

}

//BOTTOM UP
int bottom_up_lcs(string A, string B, int p, int q)
{
    int arr[p][q];

    for(int i = 0; i <= p; i++)
        for(int j = 0; j <= q; j++)
    {
        if(i == 0 || j == 0) // 0 length strings
            arr[i][j] = 0;
        else if(A[i-1] == B[j-1]) // if the char matches, add 1
            arr[i][j] = arr[i-1][j-1] + 1;
        else
            arr[i][j] = max(arr[i-1][j],arr[i][j-1]); // else return max
    }

    return arr[p][q];
//to print
    while(p > 0 || q > 0)
    {
        if(A[p-1] == B[q-1])
        {
            cout << A[p-1]; // or add to a string and print later
            p--;
            q--;
        }
        else
        {
            if(arr[p-1][q] > arr[p][q-1])
              p--;
            else
              q--;
        }

}

int main()
{
    string A = "BATD";
    string B = "ABACD";

    int n = lcs(A,B,A.length()-1,B.length()-1); // passing the last index

    cout << n << endl;
}


// Bottom up
