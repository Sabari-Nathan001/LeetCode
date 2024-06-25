class Solution {
public:
    int countPrimes(int n) {
        if(n<=2)
            return 0;
        vector<bool> ans(n+1,true);
        ans[0]=false;ans[1]=false;
        for(int i=2;i*i<n;i++){
            if(ans[i]==true){
                for(int j=2*i;j<n;j+=i){
                ans[j]=false;
                }
            }
        }
        int c=0;
        for(int i=2;i<n;i++){
            if(ans[i]==true) c++;
        }
        return c;
    }
    
};