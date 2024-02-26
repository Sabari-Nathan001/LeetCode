class Solution {
    public int trap(int[] height) {
        int n=height.length;
        int leftMax[]=new int[n];
        int rightMax[]=new int[n];
        int lval=0,rval=0,res=0;
        for(int i=0;i<n;i++){
            lval=Math.max(lval,height[i]);
            rval=Math.max(rval,height[n-i-1]);
            leftMax[i]=lval;
            rightMax[n-i-1]=rval;
        }
        for(int i=0;i<n;i++){
            res+=Math.min(leftMax[i],rightMax[i])-height[i];
        }
        return res;
    }
}