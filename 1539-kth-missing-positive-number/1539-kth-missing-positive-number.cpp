class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int rem=0;
        for(int i=0;i<INT_MAX;i++){
            if(!binary_search(arr.begin(),arr.end(),i)){
                if(rem==k)
                    return i;
                rem++;
            }
        }
        return -1;
    }
};