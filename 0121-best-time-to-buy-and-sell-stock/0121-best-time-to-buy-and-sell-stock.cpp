class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int profit=0;
        // for(int i=0;i<prices.size();i++){
        //     for(int j=i+1;j<prices.size();j++){
        //         if(prices[i]<prices[j])
        //         profit=max((prices[j]-prices[i]),profit);
        //     }
        // }
        // return profit;
        int profit=0,buyingPrice=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]<=buyingPrice){
                buyingPrice=prices[i];
                continue;
            }
            profit=max(profit,prices[i]-buyingPrice);
        }
        return profit;
    }
};