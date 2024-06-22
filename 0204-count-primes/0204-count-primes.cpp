class Solution {
public:
    int countPrimes(int n) {
        vector<bool> v(n+1,true);
        for(int i=2;i<=n;i++){
            if(v[i]){
                for(int j=2;i*j<n;j++){
                    v[i*j]=false;
                }
            }
        }
        int c=0;
        for(int i=2;i<n;i++){
            if(v[i]) c++;
        }
        return c;
    }
};