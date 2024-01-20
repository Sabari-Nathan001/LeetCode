class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        for(auto it:nums1){
            v.push_back(it);
        }
        for(auto it:nums2){
            v.push_back(it);
        }
        sort(v.begin(),v.end());
        if(v.size()%2==0){
            return (double)(v[v.size()/2]+v[v.size()/2-1])/2;
        }
        return (double)v[v.size()/2];
    }
};