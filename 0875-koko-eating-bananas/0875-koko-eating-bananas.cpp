class Solution {
public:
    long Days(vector<int> &piles,int h){
        long total=0;
        for(int i=0;i<piles.size();i++){
            total+=ceil((double)piles[i]/h);
        }
        return total;
    }
    int minEatingSpeed(vector<int>& piles,int h){
        int low=1,high=*max_element(piles.begin(),piles.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            long res=Days(piles,mid);
            if(res<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};