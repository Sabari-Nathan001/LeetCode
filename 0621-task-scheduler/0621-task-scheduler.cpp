class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        map<char,int> mp;
        int maxFreq=0,len=tasks.size();
        for(int i=0;i<len;i++){
            mp[tasks[i]]++;
            maxFreq=max(maxFreq,mp[tasks[i]]);
        }
        int c=0;
        for(auto it : mp){
            if(maxFreq==it.second){
                c++;
            }
        }
        int maxi=(maxFreq-1)*(n+1)+c;
        int k=max(maxi,len);
        return k;
    }
};