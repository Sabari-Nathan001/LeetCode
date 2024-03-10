class Solution {
public:
    vector<int> intersection(vector<int>& nums1,vector<int>& nums2) {
        unordered_set<int> hash(nums1.begin(),nums1.end());
        unordered_set<int> uni;
        for(int it : nums2){
            if(hash.count(it)){
                uni.insert(it);
            }
        }
        return vector<int>(uni.begin(),uni.end());
    }
};