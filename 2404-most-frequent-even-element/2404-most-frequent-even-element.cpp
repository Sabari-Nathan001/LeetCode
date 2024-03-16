class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>mp;
        for(int it:nums){
            if(it%2==0){
                mp[it]++;
            }
        }
        int ans=-1,maxifreq=INT_MIN;
        for(auto it:mp){
            if(it.second>maxifreq){
                maxifreq=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
};