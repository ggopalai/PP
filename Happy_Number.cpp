/*
Similar to a linked list cycle ideology.
If the number reaches 1, then the cycle is reached. Thus, in this cycle, if we use the concept of a slow and fast number,
they should intersect at 1.
If not, stuck in an infinite loop.


Another appraoch, using sets/hash table.
Each you time oyu reach a number, add it to a set.
And then check if the new gotten umber is already present in the set. If yes, then not a happy number. If it reaches 1, happy nunber.


int isHappyNumber(int n)
{
    set<int> st;
    while (1)
    {
        n = numSquareSum(n);
        if (n == 1)
            return true;
        if (st.find(n) != st.end())
            return false;
        st.insert(n);
    }
}
*/

class Solution {
public:

    int squares(int n)
    {
        int sum = 0;
        while(n)
        {
            sum += (n%10) * (n%10);
            n /= 10;
        }

        return sum;
    }

    bool isHappy(int n) {

        int slow, fast;

        slow = fast = n;

        do
        {
           slow = squares(slow);
           fast = squares(squares(fast));
        } while(slow != fast);

        return (slow == 1);


    }
};
