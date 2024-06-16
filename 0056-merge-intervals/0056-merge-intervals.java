class Solution {
    public int[][] merge(int[][] intervals) {
        Arrays.sort(intervals, (a,b) -> Integer.compare(a[0],b[0]));//sort wrt a,b
        List<int[]> result = new ArrayList<>();
        int prev[]=intervals[0];//[1,3]
        for(int i=1;i<intervals.length;i++){
            int []cur=intervals[i];//[2,6]
            if(cur[0]<=prev[1]){//[2]<=[3]
                prev[1]=Math.max(prev[1],cur[1]);//[3] or [6]
            }
            else{
                result.add(prev);
                prev=cur;
            }
        }
        result.add(prev);
        return result.toArray(new int[result.size()][]);
    }
}