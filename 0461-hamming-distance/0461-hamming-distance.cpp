class Solution {
public:
    int hammingDistance(int x, int y) {
        int c=x^y,cnt=0;
        while(c>0){
            cnt+=(c&1);
            c>>=1;
        }
        return cnt;
    }
};