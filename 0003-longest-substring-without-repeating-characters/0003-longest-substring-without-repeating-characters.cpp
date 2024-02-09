class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mpp;
        int left=0,right=0;
        int len=0;
        int n=s.length();
        while(right<n){
            if(mpp.find(s[right])!=mpp.end()){
                left=max(mpp[s[right]]+1,left);
            }
            len=max((right-left+1),len);
            mpp[s[right]]=right;
            right++;
        }
        return len;
    }
};