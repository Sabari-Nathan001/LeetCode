class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        set<int> st;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(abs(i-j)<=k && nums[j]==key){
                    st.insert(i);
                }
            }
        }
        for(auto it : st){
            v.push_back(it);
        }
        return v;
    }
};