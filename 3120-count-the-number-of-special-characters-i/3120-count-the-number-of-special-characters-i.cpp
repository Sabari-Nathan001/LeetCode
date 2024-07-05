class Solution {
public:
    int numberOfSpecialChars(string word) {
        set<int> st1,st2;
        for(auto it : word){
            if(it>='a' && it<='z'){
                st1.insert(it-'a');
            }
            else{
                st2.insert(it-'A');
            }
        }
        int c=0;
        for(auto it:st1){
            if(st2.find(it)!=st2.end()){
                c++;
            }
        }
        return c;
    }
};