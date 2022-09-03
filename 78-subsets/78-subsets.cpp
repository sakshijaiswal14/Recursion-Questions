class Solution {
public:
    void func(vector<int> &ds,vector<vector<int>> &ans,int i,vector<int>& nums){
        if(i==nums.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[i]);
        func(ds,ans,i+1,nums);
        ds.pop_back();
        func(ds,ans,i+1,nums);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        func(ds,ans,0,nums);
        return ans;
    }
};