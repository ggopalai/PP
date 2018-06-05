#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int i , j , k;
    string a, b="",c="";
    int count = 0;
    cin >> i >> j >> k;
    for(int x = i; x <= j; x++)
    {
        b = "";
        a = to_string(x); // convert number to string
        for(int u = a.length()-1; u >= 0; u--) // finding the reverse number
        {
            b = b + a[u];
        }

        int med = stoi(b);  // converting reverse numbered string back into integer.
        float minus = abs(x-med);
        float yolo = minus/k;

        if((yolo - floor(yolo)) == 0) // checking for fractional number
            count++;
    }

    cout << count;
}
