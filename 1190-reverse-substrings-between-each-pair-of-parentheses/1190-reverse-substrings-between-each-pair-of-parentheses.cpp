class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> st;
        string res="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(i+1);
            }
            else if(s[i]==')'){
                int start=st.top();
                st.pop();
                reverse(s.begin()+start,s.begin()+i);
            }
        }
        for(auto ch : s){
            if(ch!='(' && ch!=')'){
                res+=ch;
            }
        }
        return res;
    }
};