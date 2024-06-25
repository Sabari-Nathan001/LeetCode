class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](const vector<int> &a,const vector<int> &b){
           return a[0]<b[0]; 
        });
        vector<vector<int>> res;
        vector<int> prev=intervals[0];
        for(int i=1;i<intervals.size();i++){
            vector<int> cur=intervals[i];
            if(prev[1]>=cur[0]){
                prev[1]=max(prev[1],cur[1]);
            }
            else{
                res.push_back(prev);
                prev=cur;
            }
        }
        res.push_back(prev);
        return res;
    }
};