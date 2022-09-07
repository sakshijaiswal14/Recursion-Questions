class Solution {
public:
    void func(vector<int>& nums,vector<int> &ans,int i,int orr){
        if(i==nums.size()){
            ans.push_back(orr);
            return;
        }
        func(nums,ans,i+1,orr);
        orr|=nums[i];
        func(nums,ans,i+1,orr);
    }
    
    int countMaxOrSubsets(vector<int>& nums) {
        vector<int> ans;
        func(nums,ans,0,0);
        int maxx=*max_element(ans.begin(), ans.end());
        int cnt=0;
        for(auto x:ans){
            if(x==maxx) cnt++;
        }
        return cnt;
    }
};