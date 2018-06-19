/*
Using recursion + dp.
The problem can be reduced into a smaller sub-problem by either including the element or not.



*/

#include<iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;

int number(int arr[], int total, int index, map<pair<int,int>,int> &m)
{
    pair<int,int> p = make_pair(total,index);
    int res;
    if(m.count(p)) // goes in greater than 0
        return m[p];
    if(total == 0) // total reached
        return 1;
    else if(index < 0) // out of elements
        return 0;
    else if(total < 0) // not possible to reach total
        return 0;
    else if(total < arr[index]) // have to exclude that element
        res = number(arr,total,index-1,m);
    else // remaininig normal cases
        res = number(arr,total-arr[index],index-1,m) + number(arr,total,index-1,m); // including that element + not including that element

    pair<int,int> p1 = make_pair(total,index);
    m[p1] = res; //

    return res;

}

int main()
{
    int arr[10] = {2,4,6,10,13,16,17,19,23,25};
    int total = 31;
    int len = sizeof(arr)/sizeof(arr[0]) - 1;
    map<pair<int,int>,int> m;
    int n = number(arr,total,len,m);


    cout << n << endl;
}
