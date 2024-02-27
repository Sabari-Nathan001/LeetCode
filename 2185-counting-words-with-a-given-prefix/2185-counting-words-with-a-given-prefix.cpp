class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int k=pref.size();
        int c=0;
        for(auto word : words){
            if(word.substr(0,k)==pref.substr(0,k)){
                c++;
            }
        }
        return c;
    }
};