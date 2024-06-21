class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int lsum[n],rsum[n];
        int lval=0,rval=0,res=0;
        for(int i=0;i<n;i++){
            lval=max(lval,height[i]);
            rval=max(rval,height[n-i-1]);
            lsum[i]=lval;
            rsum[n-i-1]=rval;
        }
        for(int i=0;i<n;i++){
            res+=min(lsum[i],rsum[i])-height[i];
        }
        return res;
    }
};