class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //bruteforce
        // set<vector<int>> s;
        // vector<vector<int>> v;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         for(int k=0;k<n;k++){
        //             if(i!=j && j!=k && k!=i){
        //                 if(nums[i]+nums[j]+nums[k]==0){
        //                    vector<int> temp={nums[i],nums[j],nums[k]};
        //                    sort(temp.begin(),temp.end());
        //                    s.insert(temp);  
        //                 }
        //             }
        //         }
        //     }
        // }
        // for(auto &it : s){
        //     v.push_back(it);
        // }
        // return v;
        //optimal
        int target=0;
        sort(nums.begin(),nums.end());
        set<vector<int>> s;
        vector<vector<int>> v;
        for(int i=0;i<nums.size();i++){
            int left=i+1;
            int right=nums.size()-1;
            while(left<right){
                int sum=nums[i]+nums[left]+nums[right];
                if(sum==0){
                    s.insert({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                }
                else if(sum<target){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        for(auto &it : s){
            v.push_back(it);
        }
        return v;
    }
};