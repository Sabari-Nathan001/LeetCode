class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> v;
        map<int,int> mp;
        for(auto i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto i : mp)
        {
            if(i.second>1)
                v.push_back(i.first);
        }
        return v;
    }
};