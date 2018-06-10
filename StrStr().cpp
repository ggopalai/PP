class Solution {
public:
    int strStr(string haystack, string needle) {

        if(needle.length() == 0 )
        return 0;

        if(haystack.length() == 0)
            return -1;



    int count = 0;
    int len = needle.length();
    int lenB = haystack.length();


    for(int i = 0 ; i <= (lenB - len) ; i++)  // or < lenB - len + 1;
    {
        count = 0;
        for(int j = 0; j < len;)
        {
            if(needle[j] == haystack[i+j]) // comparing the two
                {
                    count++;
                    if(count == len) // match found 
                        return i;
                    j++;

                }
            else
                break;
        }


    }
    return -1;

    }
};
