class Solution {
    public int majorityElement(int[] nums) {
	    // if (nums.length == 1) {
	    // return nums[0];
	    // }
	    // Arrays.sort(nums);
	    // return nums[nums.length / 2];
        //Moore Voting Algo
        int c=0,ans=0;
        for(int num : nums){
            if(c==0)
                ans=num;
            if(num==ans)
                c+=1;
            else
                c-=1;
        }
        return ans;
    }
}