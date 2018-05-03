"""
Binary Search to find floor of square root of a number.

Naive - O(root(n)) -- times out most of the time

Better solution -- using binary search -- O(log n)

Let  's' be the answer.  We know that 0 <=  s <= x.

Consider any random number r.

    If r*r <= x, s >= r

    If r*r > x, s < r. 
"""
if(A == 0)
        return 0;
    if(A == 1)
        return 1;
    long start = 0, end = A, mid, ans; // furthur optimisation, set to end = A/2 because floor of a square root cant be more than A/2 when A > 1
    while(start<=end)
    {
        mid = (start + end)/2;
        if(mid * mid == A)  // if square root is found
            return mid;
        else if (mid * mid > A) // we need to shift out answer away from the end, hence left.
            end = mid - 1;
        else                    // shifting towards right as we need to minimize the difference
            {
                start = mid + 1; // set ans to mid as we're shifting
                ans = mid;
            }
    }
    return ans;
