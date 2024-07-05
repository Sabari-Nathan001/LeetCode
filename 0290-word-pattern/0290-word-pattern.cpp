class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string> patternTos;
        map<string,char> sTopattern;
        istringstream iss(s);
        vector<string> v;
        string word;
        while (iss >> word) {
            v.push_back(word);
        }
        if(pattern.size()!=v.size()){
            return false;
        }
        for(int i=0;i<pattern.size();i++){
            char a=pattern[i];
            string b=v[i];
            if((patternTos.count(a) && patternTos[a]!=b)||(sTopattern.count(b) && sTopattern[b]!=a)){
                return false;
            }
            patternTos[a]=b;
            sTopattern[b]=a;
        }
        return true;
    }
};