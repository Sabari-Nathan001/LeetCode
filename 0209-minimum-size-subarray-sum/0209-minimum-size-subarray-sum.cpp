class Solution {
public:
    int minSubArrayLen(int target,vector<int>& nums) {
        int left=0,right=0,mini=INT_MAX,n=nums.size(),sum=0;
        while(right<n){
            sum+=nums[right];
            while(sum>=target){
                mini=min(mini,(right-left)+1);
                sum-=nums[left];
                left++;
            }
            right++;
        }
        return mini==INT_MAX?0:mini;
    }
};