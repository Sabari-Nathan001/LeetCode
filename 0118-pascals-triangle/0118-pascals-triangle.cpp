class Solution {
public:
    vector<int> generateRow(int row){
        long long res=1;
        vector<int> ans;
        ans.push_back(1);
        for(int col=1;col<row;col++){
            res=(res*(row-col))/col;
            ans.push_back((int)res);
        }
        return ans;
    }
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};