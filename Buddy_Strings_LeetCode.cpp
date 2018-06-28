Given two strings A and B of lowercase letters,
return true if and only if we can swap two letters in A so that the result equals B.
"aa" , "ab" - false
"ab" , "ba" - true
"aba", "aba" - true


class Solution {
public:
    bool buddyStrings(string A, string B) {

        int a = A.length();
        int b = B.length();

        vector<char> ai;
        vector<char> bi;

        map<char,int> m;

        if( a != b || a == 0 || b == 0 || a == 1 || b == 1) // corner cases
            return 0;

        if( A == B ) // corner case for strings like "aba" and "aba".
        {
            for(int i = 0; i < a; i++)
            {
                m[A[i]]++;
                if(m[A[i]] > 1)  // if the same character is present more than once, we know we can swap and form B.
                    return 1;
            }

            return 0; // distince chracters
        }


        int count = 0;

        for(int i = 0; i < a; i++)
            if(A[i] != B[i])
            {
                ai.push_back(A[i]);
                bi.push_back(B[i]);
                count++;              // counting each mismatch
            }

        if(count > 2)  // if more than 2 chars, not possible at all.
            return 0;


        int flag = 0;
        int sum = 0;
        for(int i = 0; i < ai.size(); i++)
        {
            sum += ai[i] - bi[i];             // the same chars have to be in different places.
        }

        if(sum == 0)
            return 1;
        else
            return 0;

    }
};
