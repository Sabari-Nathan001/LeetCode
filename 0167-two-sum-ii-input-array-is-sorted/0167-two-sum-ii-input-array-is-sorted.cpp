class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int j=target-nums[i];
            if(mp.find(j)!=mp.end()){
                return {mp[j]+1,i+1};
            }
            mp[nums[i]]=i;
        }
        return {-1,-1};
    }
};