class Solution {
    public class Pair{
        int val;
        int count;

        Pair(int val, int count) {
            this.val = val;
            this.count = count;
        }
    }

    public int[] topKFrequent(int[] nums, int k) {
        List<Integer> res = new ArrayList<>();
        PriorityQueue<Pair> pq = new PriorityQueue<>((a,b) -> {
            return a.count - b.count;
        });

        HashMap<Integer, Integer> map = new HashMap<>();

        for (int i = 0; i < nums.length; i++) {
            if (map.containsKey(nums[i])) {
                map.put(nums[i], map.get(nums[i]) + 1);
            } else {
                map.put(nums[i], 1);
            }
        }

        for (int i : map.keySet()) {
            Pair p = new Pair(i, map.get(i));
            if (pq.size() < k) {
                pq.add(p);
            } else {
                if (p.count > pq.peek().count) {
                    pq.remove();
                    pq.add(p);
                }
            }
        }

        while (!pq.isEmpty()) {
            Pair p = pq.poll();
            res.add(p.val);
        }

        int[] ans = new int[res.size()];

        for (int i = 0; i < ans.length; i++) {
            ans[i] = res.get(i);
        }

        return ans;
    }
}