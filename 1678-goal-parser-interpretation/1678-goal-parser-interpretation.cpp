class Solution {
public:
    string interpret(string c) {
        stack<char> st;
        vector<char> v;
        for(int i=0;i<c.size();i++) {
            if (!st.empty()&&st.top()=='('&&c[i]==')'){
                v.push_back('o');
                st.pop();
            }else{
                st.push(c[i]);
                if(st.top()!='('&&c[i]!=')'){
                    v.push_back(c[i]);
                }
            }
        }
        string s(v.begin(), v.end());
        return s;
    }
};