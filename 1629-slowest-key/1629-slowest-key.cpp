class Solution {
public:
    char slowestKey(vector<int>& nums,string s){
        map<char, int> mp;
        char maxChar=s[0];
        int maxDuration=nums[0];
        for(int i=1;i<nums.size();i++){
            int duration=nums[i]-nums[i-1];
            if(mp.find(s[i])==mp.end()) 
                mp[s[i]]=duration;
            else
                mp[s[i]]=max(mp[s[i]], duration);
            if(mp[s[i]]>maxDuration || (mp[s[i]]==maxDuration && s[i]>maxChar)){
                maxChar=s[i];
                maxDuration=mp[s[i]];
            }
        }

        return maxChar;
    }
};
