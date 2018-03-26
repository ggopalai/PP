"""
Given an array with numbers from 1 to n, missing number is to be found;
Contraints : linear running time and constant space
"""

int missingNumber(vector<int>& nums) {

       int n = nums.size();
       int sum = 0, sumt= 0;
       for( int i = 1 ; i <= n ; i++)
           sum += i;                      // sum up from 1 to n
       for( int j = 0 ; j < nums.size(); j++)
           sumt += nums[j];        // sum up excluding the missing number
       int x = sum - sumt;   // diff has to be the missing number
       return x;

   }
