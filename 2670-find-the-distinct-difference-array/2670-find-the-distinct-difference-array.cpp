class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        map<int,int>mp;
        int c=0;
        for(auto i:nums){
            mp[i]++;
        }
        for(auto it:mp){
            if(it.second>0)
                c++;
        }
        set<int>st;
        vector<int> v;
        for(auto i:nums){
            st.insert(i);
            mp[i]--;
            if(mp[i]==0)
                c--;
            v.push_back(st.size()-c);
        }
        return v;
    }
};