//Linear solution. In addition to the max_so_far we also keep track of the minimal number so far. This is because,
//we might end up getting the max when we multiply two negative numbers.

class Solution {
public:

    int maximum(int a, int b, int c)
    {
        return ((a > b ? ((a>c)?a:c) : (b>c?b:c)));
    }

    int minimum(int a, int b, int c)
    {
        return ((a < b ? ((a<c)?a:c) : (b<c?b:c)));
    }

    int maxProduct(vector<int>& nums) {

        int prev_max, prev_min, cur_max, cur_min;
        int ans = nums[0];
        prev_max = prev_min = nums[0];

        for(int i = 1; i < nums.size(); i++)
        {
            cur_max = maximum(nums[i]*prev_max, nums[i]*prev_min, nums[i]);
            cur_min = minimum(nums[i]*prev_max, nums[i]*prev_min, nums[i]);
            ans = max(ans, cur_max);
            prev_max = cur_max;
            prev_min = cur_min;

        }

        return ans;
    }
};
