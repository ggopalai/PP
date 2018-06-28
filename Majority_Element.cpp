Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.

You may assume that the array is non-empty and the majority element always exist in the array.

1. Using hashtable. Solves in linear time but also linear space. (there is a boyer moore implementation with constant space)

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n = nums.size();
        if(n == 1)
            return nums[0];
        map<int,int> m;
        for(int i = 0; i < n ; i++)
            m[nums[i]]++;

        int max = 0;

        map<int,int>::iterator iter, yo;
        yo = m.begin();

        for(iter = m.begin() ; iter != m.end() ; iter++)
        {
            cout << "First : " << iter->first << " Second : " << iter->second << endl;
            if(iter->second >= yo->second)
                yo = iter;
        }

        return yo->first;





    }
};
