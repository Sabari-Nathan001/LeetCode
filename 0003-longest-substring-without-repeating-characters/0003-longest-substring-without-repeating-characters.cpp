class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,right=0,len=0;
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[right])!=mp.end()){
                left=max(mp[s[right]]+1,left);
            }
            mp[s[right]]=right;
            len=max((right-left)+1,len);
            right++;
        }
        return len;
    }
};