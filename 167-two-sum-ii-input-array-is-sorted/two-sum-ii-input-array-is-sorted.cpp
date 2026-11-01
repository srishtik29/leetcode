class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int start=0;
        int end=nums.size()-1;
        while(nums[start]+nums[end]!= target){
            if(nums[start]+nums[end]<target){
                start++;
            }
            if(nums[start]+nums[end]>target){
                end--;
            }
        }
        ans.push_back(start+1);
        ans.push_back(end+1);
        return ans;
    }
};