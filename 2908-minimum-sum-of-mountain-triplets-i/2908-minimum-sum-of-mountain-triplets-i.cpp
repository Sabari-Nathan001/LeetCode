class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                for(int k=0;k<nums.size();k++){
                    if(i<j && j<k && i<k && nums[i]<nums[j] && nums[k]<nums[j]){
                        int sum=nums[i]+nums[j]+nums[k];
                        mini=min(mini,sum);
                    }
                }
            }
        }
        return mini!=INT_MAX?mini:-1;
    }
};