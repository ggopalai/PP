/*
  Leetcode. 
   Maps!
   Brute force - n^2;
    maps gets it to N; */


class Solution {
public:
    int numJewelsInStones(string J, string S) {

        map<char,int> m;

        for(int i = 0; i < J.length(); i++)
            m[J[i]]++;


        int count = 0;
        for(int k = 0; k < S.length(); k++)
            count += m[S[k]];


        return count;

    }
};
