"""
Converting roman numerals to decimal!
covers from 1 to 3999
Needs a bit of theory.
Letters used : I,V,X,L,C,D,M
I - 4 if followed by V, 9 by X, 1 otherwise;
V - 5
X - followed by L and C. 40 if followed by L, 90 by C, 10 otherwise.
L - 50
C - 100 usually, 400 if followed by D and 900 if f by M
D - 500
M - 1000
"""
int romanToInt(string s) {

        int sum = 0;
    for(int i = 0 ; i < s.length(); )
    {
        if(s[i] == 'I')
        {
            if(s[i+1] == 'V')
                {
                    //cout << "Adding 4" << endl;
                    sum += 4;
                    i++;
                }
            else if(s[i+1] == 'X')
                {
                    //cout << "Adding 9" << endl;
                    sum += 9;
                    i++;
                }
            else
                sum += 1;

            i++;
        }

        else if(s[i] == 'V')
            {
                //cout << "Adding 5" << endl;
                sum += 5;
                i++;
            }


        else if(s[i] == 'X')
        {
               if( s[i+1] == 'L')
               {
                   sum += 40;
                   i++;
               }
            else if ( s[i+1] == 'C')
            {
                sum += 90;
                i++;
            }
            else
                sum += 10;

            i++;
        }

        else if( s[i] == 'L')
        {
                 sum += 50;
                 i++;

        }

        else if (s[i] == 'C')
        {

               if(s[i+1] == 'D')
               {
                   sum += 400;
                   i++;
               }
            else if (s[i+1] == 'M')
            {
                sum += 900;
                i++;
            }
            else
            {
                sum += 100;

            }

            i++;
        }

        else if (s[i] == 'D')
        {
              sum += 500;
              i++;
        }
        else
        {
            sum += 1000;
            i++;
        }
    }

        return sum;

            }
"""
Same algo in a different way (geeksforgeeks)
"""

int value(char r)
{
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;

    return -1;
}

// Returns decimal value of roman numaral
int romanToDecimal(string &str)
{
    // Initialize result
    int res = 0;

    // Traverse given input
    for (int i=0; i<str.length(); i++)
    {
        // Getting value of symbol s[i]
        int s1 = value(str[i]);

        if (i+1 < str.length())
        {
            // Getting value of symbol s[i+1]
            int s2 = value(str[i+1]);

            // Comparing both values
            if (s1 >= s2)
            {
                // Value of current symbol is greater
                // or equal to the next symbol
                res = res + s1;
            }
            else
            {
                res = res + s2 - s1;
                i++; // Value of current symbol is
                     // less than the next symbol
            }
        }
        else
        {
            res = res + s1;
            i++;
        }
    }
    return res;
}
