class Solution {
public:
    int findMin(vector<int>& nums) {
        int temp=0;
        int i=0;
        int j= 1;
        int x;
        while(j<nums.size()){
            if(nums[i]>nums[j]){
                temp=1;
                x=nums[j];
                break;
            }
            i++;
            j++;
        }
        if(temp==0){
            return nums[0];
        }
        else{
            return x;
        }
    }
};