Given a set of distinct integers, nums, return all possible subsets (the power set).

Input: nums = [1,2,3]
Output:
[
  [3],
  [1],
  [2],
  [1,2,3],
  [1,3],
  [2,3],
  [1,2],
  []
]

These sets can be represented using bits.

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {

        int n = nums.size();
        int high = pow(2,n) - 1;  // total number of subsets

        vector<vector<int>> outer;

        vector<int> inner;

        outer.push_back(inner); //null set

        for(int i = 1; i <= high; i++)
        {
            inner.clear(); // clear the older set

            for(int j = 0; j < n; j++) // to check bit by bit of the number. for 3 element, indexes - 0,1,2. for 4, 0,1,2,3
            {
                if( i & (1 << j) )
                    inner.push_back(nums[j]); // if that bit is set, add to vector;
            }

            outer.push_back(inner);
        }


        return outer;

    }
};
