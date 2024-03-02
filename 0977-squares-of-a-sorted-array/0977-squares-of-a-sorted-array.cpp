class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int left=0,right=n-1;
        vector<int> v(n,0);
        int pos=n-1;
        while(left<=right){
            if(abs(nums[left])<abs(nums[right])){
                v[pos]=nums[right]*nums[right];
                right--;
            } else {
                v[pos]=nums[left]*nums[left];
                left++;
            }
            pos--;
        }
        return v;
    }
};
