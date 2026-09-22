class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int i=0;
        int pivot;
        while(i<nums.size()){
            int sumr=0;
            int suml=0;
            for(int j=0;j<i;j++){
                suml+=nums[j];
            }
            for(int a=i+1;a<nums.size();a++){
                sumr+=nums[a];
            }
            if(suml==sumr){
                pivot=i;
                break;
            }
            else{
                i++;
                pivot=-1;
            }

        }
        return pivot;
    }
};