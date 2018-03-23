"""
This takes care of removing trailing and leading spaces.
but havent implemented removal of multiple spaces in between the words. (how?)
#amazon,microsoft,qualcomm,cisco 
"""
void Solution::reverseWords(string &A) {

    vector <string> l;
    string s = "";
    if(A.length() == 1)
    {
        cout << A;
        exit(0);
    }
    else
     {
         for(int i = 0 ; i < A.length(); i++)
       {
        if(i == A.length()-1 && A[i] != ' ') // to push last word
        {
            s += A[i];
            s = s + '\0';
            l.push_back(s);

        }
        //else if(A[i] == ' ')
          //i++;

        else if(isalpha(A[i]))
            s += A[i];
        else
            {
                s = s + '\0';
                l.push_back(s);
                s = "";
            }

       }

    string res = "";
    int i=l.size()-1;
    while(i >= 0)
        {
            if( i == 0 )
                res += l[i--];
            else
            res = res + l[i--] + " ";
        }

    cout << res;
    exit(0);
    }


}
