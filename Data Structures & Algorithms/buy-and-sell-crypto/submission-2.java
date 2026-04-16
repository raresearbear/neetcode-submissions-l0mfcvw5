class Solution {
    public int maxProfit(int[] prices) {
        if (prices.length < 2) {
            return 0;
        }
        int left = 0;
        int profit = 0;
        for (int right = 1; right < prices.length; ++right) { 
            int curProfit = prices[right] - prices[left];
            if (curProfit < 0) {          
                left = right;
            } else {
                profit = Math.max(profit, curProfit);
            }
        }
        return profit;
    }
}