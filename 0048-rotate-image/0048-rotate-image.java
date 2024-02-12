class Solution {
    public void rotate(int[][] matrix) {
        int n=matrix.length;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                //transpose
                int t=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=t;
            }
        }
        for(int i=0;i<n;i++)
        {
            int start=0;
            int end=n-1;
            while(start<end){
                Rowrev(matrix,start,end,i);
                start++;
                end--;
            }
        }
    }
    public void Rowrev(int [][] matrix,int start,int end,int i){
        int temp=matrix[i][start];
        matrix[i][start]=matrix[i][end];
        matrix[i][end]=temp;
    }
}