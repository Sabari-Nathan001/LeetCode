class Solution {
public:
    int finder(int index,int target,vector<int>& coins,vector<vector<int>>&dp)
    {
        if(index==0)
        {
            if((target%coins[0])==0) return target/coins[0];
            return 1e8;
        }
        if(dp[index][target]!=-1) 
            return dp[index][target];
        int notTake=finder(index-1,target,coins,dp);
        int take=1e8;
        if(target>=coins[index])
            take=1+finder(index,target-coins[index],coins,dp);
        return dp[index][target]=min(take,notTake);
    }
    int coinChange(vector<int>& coins,int amount) 
    {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int ans=finder(n-1,amount,coins,dp);  
        if(ans==1e8) 
            return -1;
        return ans;
    }
};