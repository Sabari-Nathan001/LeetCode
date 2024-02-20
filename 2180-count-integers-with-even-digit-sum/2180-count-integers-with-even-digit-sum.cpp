class Solution {
public:
    int countEven(int num) {
        int c=0;
        for(int i=1;i<=num;i++){
            int cur=i,s=0;
            while(cur>0){
                s+=cur%10;
                cur/=10;
            }
            if(s%2==0){
                c++;
            }
        }
        return c;
    }
};