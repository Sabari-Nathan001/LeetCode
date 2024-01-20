class Solution {
    public boolean isPalindrome(int n) {
        int m=n;
        int rev=0,rem;
        while(n>0)
        {
            rem=n%10;
            rev=rev*10+rem;
            n/=10;
        }
        if(m==rev)
            return true;
        return false;
        
    }
}