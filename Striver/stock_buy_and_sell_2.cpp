 int maxProfit(vector<int>& prices) {
        int low,high;
        int profit=0;
        for(int i=0;i<prices.size();i++)
        {
            while(i< prices.size()-1 && prices[i]>=prices[i+1]) i++;
            low=prices[i];

            while(i< prices.size()-1 && prices[i]<=prices[i+1]) i++;
            high=prices[i];

            profit=profit+high-low;



        }

        return profit;
    }


    //question:
//     You are given an integer array prices where prices[i] is the price of a given stock on the ith day.

// On each day, you may decide to buy and/or sell the stock. You can only hold at most one share of the stock at any time. However, you can buy it then immediately sell it on the same day.

// Find and return the maximum profit you can achieve.

// Input: prices = [7,1,5,3,6,4]
// Output: 7
// Explanation: Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.
// Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.
// Total profit is 4 + 3 = 7.

// approach:
// take highs and lows
//                     7
//  					\     5    6 
//  					 \    /\  /\
//  					  \  /  \/  4 --------->[7,1,5,3,6,4]
//  					   \/	3		  
//                        1
// So if we were to buy at every valley and sell at evry peak we can acheive the goal given in this q.
//       buy-1,3,4
//       sell-5,6
//       but as 4 doesnt have a pair we discard it
//       profit = (sum of peaks) - (sum of valleys)
//                 11 - 4 = 7