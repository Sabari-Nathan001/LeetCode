class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mp;
        for(char it : s){
            mp[it]++;
        }
        auto cmp=[](pair<char, int>& a, pair<char, int>& b) {
            return a.second > b.second;
        };
        vector<pair<char, int>> sorted(mp.begin(), mp.end());
        sort(sorted.begin(), sorted.end(), cmp);
        string res= "";
        for(auto& p : sorted) {
            res += string(p.second, p.first);
        }
        return res;
    }
};