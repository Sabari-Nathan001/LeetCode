class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size()/2;
        map<int,int> mp;
        for(auto &it : nums){
            mp[it]++;
            if(mp[it]==n){
                return it;
            }
        }
        return -1;
    }
};