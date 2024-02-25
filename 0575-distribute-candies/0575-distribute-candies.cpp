class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int k=candyType.size()/2;
        set<int> s;
        for(auto it : candyType){
            s.insert(it);
        }
        return k < s.size() ? k : s.size();
    }
};