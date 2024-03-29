class Solution {
public:
    int LessThanK(int mid,int m,int n,int k){
        int count=0;
        for(int i=1;i<=m;i++){
            count+=min(mid/i,n);
        }
        return count;
    }
    int findKthNumber(int m,int n,int k){
        int low=1,high=m*n;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(LessThanK(mid,m,n,k)<k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};
