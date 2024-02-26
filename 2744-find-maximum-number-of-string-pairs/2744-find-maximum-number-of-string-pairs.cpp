class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        for(auto &str : words){
            sort(str.begin(),str.end());
        }
        map<string,int> mp;
        for(auto str : words){
            mp[str]++;
        }
        int c=0;
        for(auto it : mp){
            if(it.second==2){
                c++;
            }
        }
        return c;
    }
};