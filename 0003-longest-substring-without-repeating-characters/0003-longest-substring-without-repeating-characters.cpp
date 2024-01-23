class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0;
        int n=s.size();
        int ans=0;
        map<char,int> mp;
        while(j<n){
            mp[s[j]]++;
            if(mp[s[j]]==2){
                while(mp[s[j]]!=1 && i<=j){
                    mp[s[i]]--;
                    i++;
                }
                if(mp[s[j]]==1){
                    ans=max(ans,j-i+1);
                }
            }
            else{
                ans=max(ans,j-i+1);
            }
            j++;
        }
       return ans;
    }
};