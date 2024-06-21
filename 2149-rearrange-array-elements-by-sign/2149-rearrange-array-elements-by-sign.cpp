class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int a=0,b=1,n=nums.size();
        vector<int> v(n);
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                v[a]=nums[i];
                a+=2;
            }
            else{
                v[b]=nums[i];
                b+=2;
            }
        }
        return v;
    }
};