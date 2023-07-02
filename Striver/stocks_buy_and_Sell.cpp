class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //prices is name of vector;
        int mini=INT_MAX;
        int max_profit=0;
        for(int i=0;i<prices.size();++i)
        {
            if(prices[i]<mini)
            {
                mini=prices[i];  //7,1,5,3,4
               
            }
            max_profit=max(max_profit,prices[i]-mini);    max profit is max of initial max profitnd current max profit
        }
        return max_profit;
    }
};

//given an array of prices of stocks on i'th day .. give the max profit we can achieve else if no max profit give 0;
