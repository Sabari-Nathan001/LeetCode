class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int n=words.size();
        map<char,int> mp;
        vector<string> res;
        for(char ch:words[0]){
            mp[ch]++;
        }
        for(int i=1;i<n;i++){
            map<char,int> mpp;
            for(char ch:words[i]){
                mpp[ch]++;
            }
            for(auto& it:mp){
                it.second=min(it.second,mpp[it.first]);
            }
        }
        for(auto& it:mp){
            for(int i=0;i<it.second;i++){
                res.push_back(string(1,it.first));
            }
        }
        return res;
    }
};