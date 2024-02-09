class Solution {
    public int lengthOfLongestSubstring(String s) {
        HashMap<Character,Integer> mpp = new HashMap<>();
        int left=0,right=0;
        int len=0;
        int n=s.length();
        while(right<n){
            if(mpp.containsKey(s.charAt(right))){
                left=Math.max(mpp.get(s.charAt(right)) + 1,left);
            }
            len=Math.max((right-left+1),len);
            mpp.put(s.charAt(right),right);
            right++;
        }
        return len;
        
    }
}