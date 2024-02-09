class Solution {
    public boolean checkIfCovered(int[] weights, int capacity, int days) {
        int currentDay = 1;
        int currentWeight = 0;

       for(int i=0;i<weights.length;i++){
           currentWeight+=weights[i];

           if(currentWeight>capacity){
               currentDay++;
               currentWeight= weights[i];
           }
       }
       return currentDay<=days;
    }

    public int shipWithinDays(int[] weights, int days) {
        int sum = 0;
        int max = 0;

        for (int i = 0; i < weights.length; i++) {
            sum += weights[i];
            max = Math.max(max, weights[i]);
        }

        int low = max;
        int high = sum;
        int ans = -1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (checkIfCovered(weights, mid, days)) {
                ans = (ans == -1) ? mid : Math.min(mid, ans);
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
}