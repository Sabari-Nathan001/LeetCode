class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(),m=matrix[0].size();
        int low=0,high=n*m-1;
        while(low<=high){
            int mid=(low+high)/2;
            int value=matrix[mid/m][mid%m];
            if(value==target){
                return true;
            }
            if(value<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return false;
    }
};