class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> preffix;
        preffix.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            int a=preffix[i-1]+nums[i];
            preffix.push_back(a);
        }
        return preffix;
    }
};