class Solution {
    public int maxProduct(int[] nums) {
        int n=nums.length;
        double maxi=Integer.MIN_VALUE;
        double pre=1,pos=1;
        for(int i=0;i<n;i++){
            if(pre==0){
                pre=1;
            }
            if(pos==0){
                pos=1;
            }
            pre*=nums[i];
            pos*=nums[n-i-1];
            maxi=Math.max(maxi,Math.max(pre,pos));
        }
        return (int)maxi;
        
    }
}