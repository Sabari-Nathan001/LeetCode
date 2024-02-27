class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        for(auto it:nums1){
            mp[it]++;
        }
        for(auto it:nums2){
            mp[it]++;
        }
        for(auto it:mp){
            if(it.second>1) 
                return it.first;
        }
        int mini1=*min_element(nums1.begin(),nums1.end());
        int mini2=*min_element(nums2.begin(),nums2.end());
        string s=to_string(min(mini1,mini2))+to_string(max(mini1,mini2));
        return stoi(s);
    }
};