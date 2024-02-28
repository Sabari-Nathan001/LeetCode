class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string str(s.length(),' ');
        for(int i=0;i<indices.size();i++){
            int t=indices[i];
            str[t]=s[i];
        }
        return str;
    }
};