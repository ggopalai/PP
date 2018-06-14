// Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.
//Leetcode - easy 
class Solution {
public:
    bool isPalindrome(string s) {

        transform(s.begin(),s.end(),s.begin(),::tolower); // coverting to lower
        int j = s.length();

        if( j == 0 )
            return true;

        vector<char> v;
        int flag = 0;


        for(int i = 0; i < s.length(); i++)
            if(isalnum(s[i]))
                v.push_back(s[i]);   // creating the mew vector with just characters

        int l = v.size();

        for(int i = 0 ; i < l/2; i++)
        {
            if( v[i] != v[l-i-1])
            {
                flag = 1;       // break when not a palindrome
                break;
            }
        }
        if( flag == 0 )
            return true;
        else
            return false;

    }
};
