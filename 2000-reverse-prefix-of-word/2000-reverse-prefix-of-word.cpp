class Solution {
public:
    void rev(int st,int end,string &word){
        if(st>=end){
            return;
        }
        swap(word[st],word[end]);
        rev(st+1,end-1,word); 
        
    }
    string reversePrefix(string word,char ch){
        int k=0;
        for(int i=0;i<word.size();i++){
            if(word[i]==ch){
                k=i;
                break;
            }
        }
        if(k!=0){
            rev(0,k,word);
        }
        return word;
    }
};