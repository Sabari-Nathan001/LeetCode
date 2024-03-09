class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex){
        int n=words.size(),mini=INT_MAX;
        for(int i=0;i<n;i++){
            if(words[i]==target){
                mini=min({mini,abs(i-startIndex),n-abs(i-startIndex)});
            }
        }
        return mini==INT_MAX?-1:mini;
    }
};