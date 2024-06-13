class Solution {
public:
    vector<int> getRow(int row) {
        row+=1;
        long long res=1;
        vector<int> ans;
        ans.push_back(1);
        for(int col=1;col<row;col++){
            res=(res*(row-col))/col;
            ans.push_back((int)res);
        }
        return ans;
    }
};