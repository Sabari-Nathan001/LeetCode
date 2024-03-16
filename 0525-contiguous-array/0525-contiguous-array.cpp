class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size(),n1=0,n0=0,len=0,key=0;
        unordered_map<int,int> mp;
        mp[0]=-1;
        for(int i=0;i<n;i++){
            n1+=nums[i];
            n0=(i+1)-n1;
            key=n1-n0;
            if(mp.count(key)!=0) 
                len=max(len,i-mp[key]);
            else 
                mp[key]=i;
        } 
        return len; 
    }
};