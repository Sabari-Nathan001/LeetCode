class Solution {
public:
    long solve(vector<int> arr,int h){
        long ans=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            ans+=ceil((double)arr[i]/h);
        }
        return ans;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi=*max_element(nums.begin(),nums.end());
        int low=1,high=maxi;
        while(low<=high){
            int mid=(low+high)/2;
            long res=solve(nums,mid);
            if(res<=threshold){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};