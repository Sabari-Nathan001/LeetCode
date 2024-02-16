class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& v) {
        int n=v.size();
        int m=v[0].size();
        for(int i=0;i<m;i++){
            int k=0;
            for(int j=0;j<n;j++){
                k=max(k,v[j][i]);
            }
            for(int j=0;j<n;j++){
                if(v[j][i]==-1)
                    v[j][i]=k;
            }
        }
        return v;
    }
};