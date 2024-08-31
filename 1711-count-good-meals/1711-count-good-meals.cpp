class Solution {
public:
    int countPairs(vector<int>& nums){
        map<int,int> mp;
        int ans=0,mod=1000000007;
        sort(nums.begin(),nums.end());
        for(auto x : nums){
            for(int i=0;i<=21;i++){
                int z=1<<i,y=z-x;
                if(y>x) break;
                ans+=mp[y];
                ans%=mod;
            }
            mp[x]++;
        }
        return ans;
    }
};