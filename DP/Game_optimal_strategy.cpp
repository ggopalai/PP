//Given a row of numbers, and the user playing first, whats maximum return he can get? Game is played alternatively.
//5,3,7, 10 - (10+5)U, (7+3)O
//Greedy doesn't always work in this.
//8,15,3,7 - greedy picks 8+7 but dp/recursion picks 7+15;
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int best(int arr[], int a, int b)
{
    if(a == b) // single element
        return arr[a];
    if(b == a + 1)
        return max(arr[a],arr[b]); // 2 elements
    else       // more than 2. Minimal case here is when the opponent is playing.
        return max( arr[a] + min(best(arr,a+2,b), best(arr,a+1,b-1)), arr[b] + min(best(arr,a+1,b-1), best(arr,a,b-2)) );
}

int main()
{
    int arr[4] = {5,3,7,10};
    int ans = best(arr,0,3);
    cout << "Best return : " << ans << endl;
}


//this however has overlapping subproblems. Bottom up dp, can help solve this;
//but how tf do you construct the table?


for (gap = 0; gap < n; ++gap)
	{
		for (i = 0, j = gap; j < n; ++i, ++j)
		{
			// Here x is value of F(i+2, j), y is F(i+1, j-1) and
			// z is F(i, j-2) in above recursive formula
			x = ((i+2) <= j) ? table[i+2][j] : 0;
			y = ((i+1) <= (j-1)) ? table[i+1][j-1] : 0; // this step is common for both the minimal calls. (a+1,b-1);
 			z = (i <= (j-2))? table[i][j-2]: 0;

			table[i][j] = max(arr[i] + min(x, y), arr[j] + min(y, z));
		}
	}
