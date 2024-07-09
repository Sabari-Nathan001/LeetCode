class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix){
        int r=matrix.size(),c=matrix[0].size(),ind=0;
        vector<int> arr(r*c,0);
        int row=0,col=0;
        bool up=true;
        while(row<r && col<c){
            if(up){
                while(row>0 && col<c-1){
                    arr[ind++]=matrix[row][col];
                    row--;col++;
                }
                arr[ind++]=matrix[row][col];
                if(col==c-1){
                    row++;
                }
                else{
                    col++;
                }
            }
            else{
                while(col>0 && row<r-1){
                    arr[ind++]=matrix[row][col];
                    row++;col--;
                }
                arr[ind++]=matrix[row][col];
                if(row==r-1){
                    col++;
                }
                else{
                    row++;
                }
            }
            up=!up;
        }
        return arr;
    }
};