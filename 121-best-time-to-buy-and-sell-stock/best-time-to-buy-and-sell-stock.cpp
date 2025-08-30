class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int max = prices[0];

        int profit  = 0;

        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]>max)
            {
                max = prices[i];
                if(max>profit)
                {
                    profit = (max-min);
                }
            }
            else
            {
                if(prices[i]<min)
                {
                    min = prices[i];
                    max = min;
                }
                else
                {
                    continue;
                }
            }
            // cout<<"i is : "<<i<<endl;
            // cout<<"profit is : "<<profit<<endl;
            // cout<<endl;
        }
        return profit;
    }
};