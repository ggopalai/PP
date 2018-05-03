"""
To find the length of the last word of the string.
Corner cases : Only one word. Only spaces. Empty string. Has words but ends with spaces.

"""

int Solution::lengthOfLastWord(const string A) {
    int count = 0;
    int n = A.length();
    if(n == 1) // single char
        return 1;
    if(n == 0) // empty string
        return 0;


    for(int i = n - 1 ; (A[i] != char(32) || !count) ; i-- ) // !count here is to take care of string ending with spaces case.
    {
        while(!count && A[i] == ' ') // again, to take care of strings ending with spaces.
        {

                i--;
                if(i == 0)
                    return 0;
        }
        if(i == 0) // for the single word case
        {
            count++;
            break;
        }
        count++; // normal count
    }
    return count;
}
