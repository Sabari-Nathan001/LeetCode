class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int res=0,n=nums.size();
        vector<bool> seen(n);
        for(auto it : nums) {
            int c=0;
            while(!seen[it])
            {
                seen[it]=true;
                c++;
                it=nums[it];
            }
            res=max(res,c);
        }
        return res;  
    }
};