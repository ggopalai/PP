1. Using binary representation
Wkt n and n-1 differ by n's rightmost 1 and all the bits to the right of it.'
So, continuosly bitwise ANDing it with its smaller next digit, end up getting 0.
And the number of steps taken to do so is equal to the number of 1's in the binary rep.'
//
int number(int n)  // TC : O(number of 1's in the number')
{
    int x = 0;
    while(n)
    {
        x++;
        n = n & (n-1);
    }
    return x;
}

2. Iterative.
//Bitwising the number with 2 ^ i, which has only 1 bit set.
// If its 1, increment. else, FO.
int number(int n)
{
    int con = 0;
    for(int i = 0; i < 8; i++)
    {
        if( (n & (1 << i)) )
            con++;
    }
    return con;

}
