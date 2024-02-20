class Solution {
public:
    string convert(string s, int numRows){
        int n=s.size();
        string str[numRows][n];
        int row=0,col=0,cur=0;
        while(cur<n){
            while(row<numRows && cur<n){
                str[row++][col]=s[cur++];
            }
            row=max(0,row-2);
            while(row>0 && cur<n){
                str[row--][++col]=s[cur++];
            }
            col++;
        }
        string ans="";
        for(int i=0;i<numRows;i++){
            for(int j=0;j<n;j++){
                ans+=str[i][j];
            }
        }
        return ans;
    }
};