class Solution {
public:
    vector<int> dp=vector<int> (46,-1);
    int climbStairs(int n) {
        if(n<=3){
            dp[n]=n;
            return dp[n];
        }
        if(dp[n-2]<0){
            dp[n-2]=climbStairs(n-2);
        }
        if(dp[n-1]<0){
            dp[n-1]=climbStairs(n-1);
        }
        
        return dp[n-2]+dp[n-1];
    }
};