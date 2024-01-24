class Solution {
public:
    int findContentChildren(vector<int>& g,vector<int>& s){
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int c=0;
        int i=0,j=0;
        while(i<g.size() && j<s.size()){
            if(s[j]>=g[i]){
                c++;
                i++;
            }
            j++;
        }
        return c;
    }
};
