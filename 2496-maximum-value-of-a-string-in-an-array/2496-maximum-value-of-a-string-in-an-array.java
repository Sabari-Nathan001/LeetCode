class Solution {
    public int maximumValue(String[] strs) {
        int ans=0;
        for(String s:strs){
            ans=Math.max(ans,solve(s));
        }
        return ans;
    }
    private static int solve(String s){
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)>='a'&&s.charAt(i)<='z')
                return s.length();
        }
        return Integer.parseInt(s);
    }
}