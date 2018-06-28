1. Naive af.
   keep looping and multiplying.

2. Divide and conquer
class Solution {
public:
    double myPow(double x, int n) {

            if(n == 1)
                return x;
            if(n == 0)
                return 1;
            if(n < 0)
            {
                n = -1 * n;
                x = 1/x;
            }
            if(n % 2 == 0)
                 return (myPow(x,n/2) * myPow(x,n/2));
            else
                return (x * myPow(x,n/2) * myPow(x,n/2));
    }
};


3. Linear time. How are people this smart. fffffs :(
  class Solution {    // this multiples atmost twice the index of n's MSB. fuckin linear! 
  public:
      double myPow(double x, int n) {

              double result = 1.00;
              long power = n; // time exceeded for n = -2^31 with int. why?

              if( n < 0)   // negative case
              {
                  power = -power;
                  x = 1/x;
              }

              while(power)
              {
                  if(power & 1)  // if last bit is set, multiply the result
                      result *= x;
                  x *= x;  // then multiply the main number itself
                  power >>= 1; // reduce the power by 2
              }

          return result;
      }
  };
