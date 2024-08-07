class Solution {
public:
    int climbStairs(int n) {
        int prev=1,prev2=1;
        if(n==1){
            return prev;
        }
        if(n==2){
            return prev+prev2;
        }
        for(int i=2;i<=n;i++){
            int cur=prev+prev2;
            prev2=prev;
            prev=cur;
        }
        return prev;
    }
};