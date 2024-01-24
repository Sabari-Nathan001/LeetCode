class Solution {
public:
    bool isvowel(char ch){
        return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
    }
    int maxVowels(string s, int k) {
        int c=0,maxi=0;
        for(int i=0;i<k;i++){
            if(isvowel(s[i])) 
                c++;
        }
        if(c==k) return k;
        maxi=max(maxi,c);
        for(int i=k;i<s.size();i++){
            if(isvowel(s[i-k])) 
                c--;
            if(isvowel(s[i])) 
                c++;
            maxi=max(maxi,c);
            if(c==k){
                return k;
            }
        }
        return maxi;
    }
};