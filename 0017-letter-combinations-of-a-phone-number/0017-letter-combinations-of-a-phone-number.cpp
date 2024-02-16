class Solution {
public:
    vector<string> mapping={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    void solve(int i,string &ds,vector<string> &ans,string &digits){
        if(i==digits.size()){
            ans.push_back(ds);
            return;
        }
        int digit=digits[i]-'0';
        for(int j=0;j<mapping[digit].size();j++){
            //pick
            ds+=mapping[digit][j];
            solve(i+1,ds,ans,digits);
            //backtrack
            ds.pop_back();
        }
    }
    vector<string> letterCombinations(string digits){
        vector<string> ans;
        if(digits.size()==0)
            return ans;
        string ds;
        solve(0,ds,ans,digits);
        return ans;
    }
};