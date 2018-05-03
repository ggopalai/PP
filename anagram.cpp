"""
The letters in anagrams need to be the same;
So, use an array to count the number of appearing letters.
"""
bool isAnagram(string s, string t) {
        int flag = 0;
        //if(s.compare(t) == 0)   this is if a string is NOT an anagram of itself
          //  return false;
        if(s.length() != t.length())
            return false;
        int check[126] = {0} ;
        for(int i = 0; i < s.length() ; i++)
        {
            check[int(s[i])]++;
            check[int(t[i])]--;
        }
        for(int j = 0; j <= 122; j++)
            if(check[j] != 0)
            {
                flag = 1;
                break;
            }
        if ( flag == 1)
            return false;
        else
            return true;
