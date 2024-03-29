class Solution {
public:
    string longestPalindrome(string s){
        int n=s.size();
        if(n<=1) return s;
        int start=0,maxLen=1;
        for(int i=0;i<n;i++){
            //odd length
            int left=i,right=i;
            while(left>=0 && right<n && s[left]==s[right]){
                if(right-left+1 > maxLen){
                    start=left;
                    maxLen=right-left+1;
                }
                left--;
                right++;
            }
            //even length
            left=i;
            right=i+1;
            while(left>=0 && right<n && s[left]==s[right]){
                if(right-left+1 > maxLen){
                    start=left;
                    maxLen=right-left+1;
                }
                left--;
                right++;
            }
        }
        return s.substr(start,maxLen);
    }
};
