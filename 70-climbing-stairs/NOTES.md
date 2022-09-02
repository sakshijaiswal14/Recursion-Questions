if(r[n-1]<0){
r[n-1]=climbStairs(n-1);
}
return r[n-1]+r[n-2];
}*
**NOTE-NORMAL ARRAY OR VECTOR DECLARTION WONT WORK HERE**
vector<int> r=vector<int>(46,-1);
​
`
vector<int> dp=vector<int>(46,-1);
int climbStairs(int n) {
dp[1]=1;
dp[2]=2;
for(int i=3;i<=n;i++){
dp[i]=dp[i-1]+dp[i-2];
}
return dp[n];
}
`
​