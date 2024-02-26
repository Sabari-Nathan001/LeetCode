class Solution {
    public int findPoisonedDuration(int[] timeSeries, int duration) {
        int prev=-1,ans= 0;
        for(int it:timeSeries){
            ans+=duration;
            if(prev>=it){
                ans=ans-Math.abs(prev-it)-1; 
            }
            prev=it+duration-1;
        }
        return ans;
    }
}