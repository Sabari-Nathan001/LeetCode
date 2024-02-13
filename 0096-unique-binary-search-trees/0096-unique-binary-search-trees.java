class Solution {
    public int numTrees(int n) {
        //nth cataian Number
        int [] cataian = new int[n+1];
        cataian[0]=1;cataian[1]=1;
        for(int i=2;i<=n;i++){
            for(int j=0;j<i;j++){
                cataian[i]+=cataian[j]*cataian[i-j-1];
            }
        }
        return cataian[n];
    }
}