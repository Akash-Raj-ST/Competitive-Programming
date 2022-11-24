// https://leetcode.com/problems/remove-outermost-parentheses/description/

class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;

        int n = s.length();
        string ans;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                if(!st.empty())
                    ans += '(';
                
                st.push('(');
            }else{
                st.pop();
                if(!st.empty())
                    ans +=')';
                
            }
        }
        return ans;

    }
};