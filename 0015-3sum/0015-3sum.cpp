class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int target=0;
        sort(nums.begin(),nums.end());
        set<vector<int>> s;
        vector<vector<int>> v;
        for(int i=0;i<nums.size();i++){
            int left=i+1;
            int right=nums.size()-1;
            while(left<right){
                int sum=nums[i]+nums[left]+nums[right];
                if(sum==target){
                    s.insert({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                }
                else if(sum<target){
                    left++;
                } else {
                    right--;
                }
            }
        }
        for(auto it:s)
            v.push_back(it);
        return v;
    }
};