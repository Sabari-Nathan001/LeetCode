class Solution {
    public int minimumCost(int[] nums){
        int k=nums[0],a=100000,b=1000000;
        for(int i=1;i<nums.length;i++){
            if(nums[i]<a){
                b=a;
                a=nums[i];
            }else if(nums[i]<b){
                b=nums[i];
            }
        }
        int res=k+a+b;
        return res;
    }
}