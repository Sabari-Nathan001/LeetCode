class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) 
            return 0;
        sort(nums.begin(),nums.end());
        int smallest=INT_MIN,c=0,arr=0,res=1;
        for(int i=0;i<n;i++){
            arr=nums[i];
            if(arr-1==smallest){
                c+=1;
                smallest=arr;
            }
            else if(arr!=smallest){
                c=1;
                smallest=arr;
            }
            res=max(res,c);
        }
        return res==INT_MIN?0:res;
    }
};