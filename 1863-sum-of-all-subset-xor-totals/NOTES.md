**1-NAIVE APPROACH**
find all subsets then calculate their XOR
```
vector<int> ds;
void func(int i,vector<int>& nums){
if(i==nums.size()){
v.push_back(ds);
return;
}
ds.push_back(nums[i]);
func(i+1,nums);
ds.pop_back();
func(i+1,nums);
}
int ans=0;
int subsetXORSum(vector<int>& nums) {
func(0,nums);
for(int i=0;i<v.size();i++){
int res=0;
for(int j=0;j<v[i].size();j++){
res=res^v[i][j];
}
// cout<<res<<endl;
ans+=res;
}
return ans;
}
```
​
**2-OPTIMIZED APPROACH**
```
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
```
​
​
​
​
​
​