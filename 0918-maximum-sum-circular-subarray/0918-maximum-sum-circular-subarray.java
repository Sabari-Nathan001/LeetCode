class Solution {
    public int maxSubarraySumCircular(int[] nums) {
        // Algorithm
        // Maxsubarray - Kadane's algo
        // Minsubarray
        // Sum of the elements of the array
        int l=nums.length;
        int max=Integer.MIN_VALUE;
        int sum=0;
        int tot=0;
        for(int i=0;i<l;i++)
        {
            tot+=nums[i];
            sum+=nums[i];
            max=Math.max(max,sum);
            if(sum<0)
            {
                sum=0;
            }
            
        }
        int min=Integer.MAX_VALUE;
        for(int i=0;i<l;i++)
        {
            sum+=nums[i];
            min=Math.min(min,sum);
            if(sum>0)
            {
                sum=0;
            }
        }
        if(tot!=min)
        return Math.max(max,tot-min);
        
        return max;
        
    }
}