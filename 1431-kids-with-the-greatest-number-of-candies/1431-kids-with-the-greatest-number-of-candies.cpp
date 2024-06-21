class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi=*max_element(candies.begin(),candies.end());
        vector<bool> res;
        for(auto it : candies){
            res.push_back((it+extraCandies)>=maxi);
        }
        return res;
    }
};