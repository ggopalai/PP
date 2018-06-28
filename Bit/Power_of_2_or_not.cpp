1. A power of 2 ends up with 1 on repeatedly dividing it by 2. No other number does so.
bool power(int n) // O(Log n)
{
    if(n == 0)
        return 0;

    while(n%2 == 0)
        n /= 2;
    return ( n == 1); // when broken out, a power of 2 always equals 1. Other numbers equal a numebr greater.

}


2. Using binary representation
bool power(int n)
{
   if (n & (n-1) == 0)
      return 1;
  else
      return 0;
}
