class Solution {
    public double myPow(double a,int y){
        int b=Math.abs(y);
        double res=1.0;
        while(b!=0){
            if(b%2!=0){
                res*=a;
            }
            b/=2;
            a*=a;
        }
        if(y<0){
            return 1.0/res;
        }
        return res;
    }
}