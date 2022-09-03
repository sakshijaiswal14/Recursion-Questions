class Solution {
public:
    vector<vector<int>> ans;
    vector<int> ds;
    void func(int i,vector<int>& nums){
        if(i==nums.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[i]);
        func(i+1,nums);
        ds.pop_back();
        func(i+1,nums);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        func(0,nums);
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
    }
};