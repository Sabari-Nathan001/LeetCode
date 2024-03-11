class Solution {
public:
    bool isMatch(string A, string B) {
        int n=A.size(),m=B.size();
        bool dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
        dp[0][0]=1;
        for(int i=2;i<=m;i++)
        {
            if(B[i-1]=='*')
                dp[0][i]=dp[0][i-2];
            
        }
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if((A[i-1]==B[j-1])||B[j-1]=='.')
                {
                    dp[i][j]=dp[i-1][j-1];
                }
                else if(B[j-1]=='*')
                {
                    if(j==1)
                        dp[i][j]=0;
                    else
                    {
                        dp[i][j]=dp[i][j-2];
                        if(B[j-2]=='.'||(A[i-1]==B[j-2]))
                            dp[i][j]=dp[i][j]||dp[i-1][j];
                    }
                }
            }
        }
        return dp[n][m];
    }
};