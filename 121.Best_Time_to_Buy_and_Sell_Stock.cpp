class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int len = prices.size();
        int min = prices[0], maxProfit = 0;

        for(int i = 1 ; i < len ; i++)
        {
            if(prices[i] < min)
            {
                min = prices[i];
            }
            else
            if(maxProfit < prices[i] - min)
            {
                maxProfit = prices[i] - min;
            }
        }

        return maxProfit;
    }
};