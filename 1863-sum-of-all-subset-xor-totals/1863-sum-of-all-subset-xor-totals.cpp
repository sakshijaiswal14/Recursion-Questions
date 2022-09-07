class Solution {
public:
    int ans=0;
    void func(int i,int xxor,vector<int>& nums){
        if(i==nums.size()){
            ans+=xxor;
            return;
        }
        func(i+1,xxor,nums);
        xxor^=nums[i];
        func(i+1,xxor,nums);
    }
    int subsetXORSum(vector<int>& nums) {
        func(0,0,nums);
        return ans;
    }
};