/* Solved in O(n). but leetcode wants better :( ).
*/

class Solution {
public:
    int firstUniqChar(string s) {


         multimap<char,int> m;
         multimap<char,int>:: iterator i;
        for(int i = 0; i < s.length(); i++)  //map out the char -> index values.
        {
            m.insert(make_pair(s[i],i));
        }

        for(int j = 0; j < s.length(); j++)
        {
            if(m.count(s[j]) == 1) // for the first char with count == 1 return itd index
            {
                i = m.find(s[j]);
                if( i == m.end() )
                    continue;
                return (i->second);

        }
        }

            return -1;

    }
};
