class Solution {
public:
    vector<int> shortestToChar(string s,char c){
        vector<int>position;
        vector<int>ans;
        for(int i=0;i<s.size();i++){
            if(s[i]==c){
                position.push_back(i);
            }
        }
        for(int i=0;i<s.size();i++){ 
            int m=INT_MAX;
            for(int j=0;j<position.size();j++){
                m=min(m,abs(i-position[j]));
            }
            ans.push_back(m);
        }
        return ans;
    }
};