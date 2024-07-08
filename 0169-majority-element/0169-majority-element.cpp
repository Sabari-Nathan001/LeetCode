class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,element=0;
        for(auto it : nums){
            if(count==0){
                count=1;
                element=it;
            }
            else if(it==element){
                count++;
            }
            else{
                count--;
            }
        }
        return element;
    }
};