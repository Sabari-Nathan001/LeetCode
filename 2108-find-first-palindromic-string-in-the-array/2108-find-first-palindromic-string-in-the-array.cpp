class Solution {
public:
    bool isPalindrome(string s,int start,int end){
        if(start>=end){
            return true;
        }
        if(s[start]!=s[end]){
            return false;
        }
        return isPalindrome(s,start+1,end-1);
    }
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            string s=words[i];
            int start=0,end=s.size()-1;
            if(isPalindrome(s,start,end)){
                return words[i];
            }
            else{
                continue;
            }
        }
        return "";
    }
};