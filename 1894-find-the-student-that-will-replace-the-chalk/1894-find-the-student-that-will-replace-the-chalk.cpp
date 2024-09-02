class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k){
        long sum=0;
        for(auto it : chalk){
            sum+=it;
        }
        int rem=k%sum;
        for(int i=0;i<chalk.size();i++){
            rem-=chalk[i];
            if(rem<0){
                return i;
            }
        }
        return -1;
    }
};