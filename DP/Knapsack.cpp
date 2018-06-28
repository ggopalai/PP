//Recursion + Dp. So in each step, either include or not include the item.

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int knapsack(int C, int n, int V[], int W[], map<pair<int,int>,int> &m)
{
    int res;
    pair<int,int> p = make_pair(C,n);
    if(m.count(p))  // if > 0
        return m[p];
    if(C <= 0 || n == 0) // final base cases
        res = 0;
    else if(W[n] > C) // weight being grater than the given capacity
        res =  knapsack(C,n-1,V,W,m);
    else
    {
        res = max( V[n] + knapsack(C-W[n],n-1,V,W,m) , knapsack(C,n-1,V,W,m) ); // including and not including
    }

    m[p] = res;

    return res;


}

int main()
{
    int W[6] = {0,10,20,30};
    int V[6] = {0,60,100,120};
    int n = sizeof(W)/sizeof(W[0]);
    int C = 50;
    map<pair<int,int>,int> m;
    int x = knapsack(C,n-1,V,W,m);

    cout << x << endl;
}
