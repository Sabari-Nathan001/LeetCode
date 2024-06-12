class Solution {
public:
    bool isIsomorphic(string s,string t){
        map<char,char> stoT,ttoS;
        for(int i=0;i<s.size();i++){
            char a=s[i],b=t[i];
            if((stoT.count(a) && stoT[a]!=b) || (ttoS.count(b) && ttoS[b]!=a))
                return false;
            stoT[a]=b;
            ttoS[b]=a;
        }
        return true;
    }
};