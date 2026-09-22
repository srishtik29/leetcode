class NumArray {
public:
    vector<int> preffix;
    NumArray(vector<int>& nums) {
        preffix.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            int a=preffix[i-1]+nums[i];
            preffix.push_back(a);
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0){
            return preffix[right];
        }
        else{
            return preffix[right]-preffix[left-1];
        }
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */