class Solution {
    public class Pair {
        int val;
        int index;

        Pair(int val, int index) {
            this.val = val;
            this.index = index;
        }
    }

    public int[] maxSlidingWindow(int[] nums, int k) {
        int n = nums.length;
        PriorityQueue<Pair> pq = new PriorityQueue<>((a, b) -> {
            return b.val - a.val;
        });  // create max heap 

        int[] res = new int[n - k + 1];

        for (int i = 0; i < k; i++) {
            pq.add(new Pair(nums[i], i));
        }

        res[0] = pq.peek().val;

        for (int i = k; i < nums.length; i++) {
            while (pq.size() > 0 && pq.peek().index <= (i - k)) {
                pq.remove();
            }

            pq.add(new Pair(nums[i], i));

            res[i - k + 1] = pq.peek().val;
        }
        return res;

    }
}