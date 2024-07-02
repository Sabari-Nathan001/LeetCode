class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0,right=0,maxLen=0,n=s.size(),maxFreq=0,len=0;
        map<int,int> mp;
        while(right<n){
            mp[s[right]]++;
            maxFreq=max(maxFreq,mp[s[right]]);
            int len=right-left+1;
            if(len-maxFreq > k){
                mp[s[left]]--;
                maxFreq=0;
                left++;
            }
            else if(len-maxFreq <= k){
                maxLen=max(maxLen,len);
            }
            right++;
        }
        return maxLen;
    }
};