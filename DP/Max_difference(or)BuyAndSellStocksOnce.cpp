To find the maximum difference between the given elements such that the larger element is greater.
This also the sane as Buy and Sell stocks (ONCE);

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[7] = {2,3,10,6,4,8,1};

    int min_so_far = arr[0];  // keeping track of the minimum elemnt so far.
    int max_diff = arr[1] - arr[0]; //

    for(int i = 2; i < (sizeof(arr)/sizeof(arr[0])) ; i++)
    {
        if(arr[i] < min_so_far)
            min_so_far = arr[i];
        else if(arr[i] > min_so_far)
        {
            int diff = arr[i] - min_so_far;
            if(diff > max_diff)
                max_diff = diff;
        }
    }

    cout << max_diff << endl;
}
