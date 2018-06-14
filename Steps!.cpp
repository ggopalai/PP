/*
So, find the total number of ways in which you can reach the step 'N'.
Given that, you can take steps of 1 or 2.
So, lets say N = 4.
You can get to 4 from step 2 or from step 3.
Thus, the number of wasy to get to 4 is the sum of number of ways to 2  and number of ways to 3.
If say. you can take 3 steps at once, then include upto n-3;

*/


int Solution::climbStairs(int A) {

    int array[A+1];
    array[1] = 1;
    array[2] = 2;
    for(int i = 3 ; i <= A; i++)
    {
        array[i] = array[i-1] + array[i-2];
    }

    return array[A];

}
