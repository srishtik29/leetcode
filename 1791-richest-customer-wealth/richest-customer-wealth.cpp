class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_balance=0;
        for(int i =0; i<accounts.size();i++){
            int sum=0;
            for(int j=0;j<accounts[i].size();j++){
                sum+=accounts[i][j];
            }

            max_balance=max(sum,max_balance);
        }
        return max_balance;
    }
};