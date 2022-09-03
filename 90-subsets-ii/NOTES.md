**BRUTE FORCE APPROACH**
```
vector<vector<int>> ans;
vector<int> ds;
void func(vector<int>& nums,int i){
if(i==nums.size()){
ans.push_back(ds);
return;
}
ds.push_back(nums[i]);
func(nums,i+1);
ds.pop_back();
func(nums,i+1);
}
vector<vector<int>> subsetsWithDup(vector<int>& nums) {
sort(nums.begin(),nums.end());
func(nums,0);
sort(ans.begin(), ans.end());
ans.erase(unique(ans.begin(), ans.end()), ans.end());
return ans;
}
```
​
**OPTIMIZED APPROACH**
```
vector<vector<int>> ans;
vector<int> ds;
void func(vector<int>& nums,int ind){
//no need for base case bcz that is handled by n-1 thing in loop
ans.push_back(ds);
for(int i=ind;i<nums.size();i++){
if(i!=ind && nums[i]==nums[i-1])
continue;              // to avoid repetitions
ds.push_back(nums[i]);
func(nums,i+1);
ds.pop_back();
}
}
```

NOTE
***unique()*** is used to remove duplicates of any element present consecutively in a range[first, last)
it does not changes the size of container
***erase()*** is used to remove specific elements from the container or a range of elements from the container, reducing its size by the number of elements removed
