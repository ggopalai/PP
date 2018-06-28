1. Recursive

void bin(unsigned int n)
{
   if(n == 0)
        return;
   bin(n/2);
   cout << n % 2 ;
}

2. iterative.

void bin(unsigned int n)
{
   for(unsigned i = 128; i > 0; i /= 2)
   {
       (i & n) ? printf("%d",1) : printf("%d",0); // bitwise ANDing with a power of 2, whihc has only 1 bit set. 
   }
}
