class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int i = 0;
        int n = prices.size();
        int mini, maxi, profit = 0;
        if(n == 0) // empty array
            return 0;
        while(i < n-1) // no use bying on the last day
        {
           while(prices[i+1] < prices[i] && i < n-1) // getting local maxima
               i++;
           if(i == n-1  && profit == 0) // descending order array
               return 0;
           mini = i++; // index of minima
           if(mini == n-1) // if buying at last day, no use, so return
               return profit;
           while(prices[i+1] > prices[i] && i < n-1) // finding maxima
               i++;
           maxi = i++; // finding maxima

           profit += prices[maxi] - prices[mini]; // profit

        }

        return profit;

    }
};


/* A simpler one pass solution : Apparently the total profit is the sum of every CONSECUTIVE(valley and peak next to each other)
 transaction made.  */
Say [1, 7, 2, 3, 6, 7, 6, 7]  -- 6 + 1 + 3 + 1 + 1
class Solution {
    public int maxProfit(int[] prices) {
        int maxprofit = 0;
        for (int i = 1; i < prices.length; i++) {
            if (prices[i] > prices[i - 1])
                maxprofit += prices[i] - prices[i - 1];
        }
        return maxprofit;
    }
}
