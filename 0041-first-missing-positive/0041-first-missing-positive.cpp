class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,int> mp;
        for(auto it : nums){
            if(it>0){
                mp[it]++;
            }
        }
        for(int i=1;i<nums.size()+1;i++){
            if(mp.find(i)==mp.end()){
                return i;
            }
        }
        return nums.size()+1;
        
    }
};