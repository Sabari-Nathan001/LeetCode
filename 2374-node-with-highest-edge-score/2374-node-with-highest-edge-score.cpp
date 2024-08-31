class Solution {
public:
    int edgeScore(vector<int>& edges){
        int n=edges.size();
        vector<long> arr(n,0);
        for(int i=0;i<n;i++){
            int x=edges[i];
            arr[x]+=i;
        }
        long ans=-1;
        int res=-1;
        for(int i=0;i<arr.size();i++){
            long x=arr[i];
            if(x>ans){
                ans=x;
                res=i;
            }
        }
        return res;
    }
};