class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        List<Integer> v = new ArrayList<>();
        for(int i=0;i<nums1.length;i++){
            v.add(nums1[i]);
        }
        for(int i=0;i<nums2.length;i++){
            v.add(nums2[i]);
        }
        Collections.sort(v);
        if (v.size() % 2 == 0) {
            return (double) (v.get(v.size() / 2) + v.get(v.size() / 2 - 1)) / 2;
        }
        return (double) v.get(v.size() / 2);
    }
}