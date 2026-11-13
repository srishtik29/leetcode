class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0];
        int profit=0;
        int max=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<buy){
                buy=prices[i];
            }
            else{
                profit=prices[i]-buy;
                if(profit>max){
                    max=profit;
                }
            }


        }
        return max;
    }
};