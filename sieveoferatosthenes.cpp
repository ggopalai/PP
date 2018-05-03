"""
  Used to find all primes upto the given number.
  TO - n * log log n
"""
vector<int> Solution::sieve(int A) {
    int b = A + 1;
    int a[b];
    for(int k = 2 ; k < b ; k++) // assuming all the number are prime first
    {
        a[k] = 1;
    }
    for(int i = 2 ; i < A ; i++) // can run till i <= sqrt(A), furthur optimization
    {
        if(a[i] == 1)
        {
            for(int j = 2 ; i * j <= A ; j++) // make j = i for furthur optimization
            {
                a[i * j] = 0;  // cancelling out the multiples of primes
            }
        }
    }
    vector<int> t;
    for(int i = 2 ; i <= b ; i++)
    {
        if(a[i] == 1)
        {
            t.push_back(i);
        }
    }
    return t;
}
