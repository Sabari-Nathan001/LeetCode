class Solution {
public:
    int numberOfSubstrings(string s) {
        int hash[3]={-1,-1,-1};
        int cnt=0;
        for(int i=0;i<s.size();i++){
            hash[s[i]-'a']=i;
            if(hash[0]!=-1 && hash[1]!=-1 && hash[2]!=-1){
                cnt+=(1+*min_element(hash,hash+3));
            }
        }
        return cnt;
    }
};