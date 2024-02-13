class Solution {
    public int eraseOverlapIntervals(int[][] intervals) {
        // Sort all the intervals in ascending order
        Arrays.sort(intervals,(a,b)->Integer.compare(a[0],b[0]));
        int count=0;
        int n=intervals.length;
        int left=0;// left interval
        int right=1;// right interval
        while(right<n){// unless all intervals are compared
            if(intervals[left][1]<=intervals[right][0]){// non overlapping case
                left=right;
                right++;
            }else if(intervals[left][1]<=intervals[right][1]){// overlapping case 1 remove right interval
                count++;
                right++;// delete right
            }else{
                count++;
                left=right;// delete left
                right++;
            }
        }
        return count;
    }
}