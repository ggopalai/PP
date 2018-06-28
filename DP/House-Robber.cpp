So 2 adjacent houses cannot be robbed. With this condition, whats the maximum stash you can loot?

class Solution {
public:
    int rob(vector<int>& nums) {

        int n = nums.size();
            if(n==0)
                return 0;
        int dp[n];

        if(n == 1)
            return nums[0]; // only one house
        else if(n == 2)
            return max(nums[0], nums[1]); // max of the two houses
        else
        {

            dp[0] = nums[0];
            dp[1] = max(nums[0],nums[1]);

            for(int i = 2; i < n ; i++)
                dp[i] = max( dp[i-1], dp[i-2]+nums[i] ); // at the i'th house, either take max till i-2 + current val, or max till last house
        }

        return dp[n-1];


    }
};
