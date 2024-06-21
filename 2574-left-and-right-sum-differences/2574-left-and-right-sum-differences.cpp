class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> res;
        int sum=accumulate(nums.begin(),nums.end(),0);
        int lsum=0,rsum=sum;
        for(int i=0;i<nums.size();i++){
            rsum-=nums[i];
            res.push_back(abs(lsum-rsum));
            lsum+=nums[i];
        }
        return res;
    }
};