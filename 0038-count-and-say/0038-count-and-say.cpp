class Solution {
public:
    string countAndSay(int n) {
        string cur="1";
        for(int k=1;k<n;k++){
            int i=0;
            string next="";
            while(i<cur.size()){
                int count=1;
                while(i<cur.size()-1 && cur[i]==cur[i+1]){
                    count++;
                    i++;
                }
                next+=to_string(count)+cur[i];
                i++;
            }
            cur=next;
        }
        return cur;
    }
};