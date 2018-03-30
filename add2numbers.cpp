"""
Add two numbers without using operators + and -
Method 1 : using unary increment and decrement operators
"""
int getSum(int a, int b) {

        if(b > 0)  // case 1, if b is positive, then increment a, b times;
        {
            while(b--)
            a++;
        }
        else if (b < 0) // case 2, if b is negative, decrement a, b times;
        {
            b = b * -1;
            while(b--)
                a--;
        }
        else return a; // case 3 , b = o

        return a;
    }

    """
    Method 2 : Using bitwise opertors
    Not sure how this works :3 
    """

    int add(int num1, int num2) {
   if (!num1)
      return num2;
   else
      return add( (num1 & num2) << 1, num1 ^ num2);
}
