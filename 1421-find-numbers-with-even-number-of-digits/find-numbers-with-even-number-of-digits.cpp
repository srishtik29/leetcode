class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int no_even=0;
        for(int a=0;a<nums.size();a++){
            int i= nums[a];
            int count=0;
            while(i>0){
                i=i/10;
                count+=1;

            }
            if(count%2==0){
                no_even+=1;
            }
        }
        return no_even;
    }
};