class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/"){
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();

                int ans;

                if(tokens[i]=="+"){
                    ans = a+b;
                }else if(tokens[i]=="-"){
                    ans = b-a;
                }else if(tokens[i]=="*"){
                    ans = a*b;
                }else{
                    ans = b/a;
                }

                s.push(ans);
            }else{
                s.push(stoi(tokens[i]));
            }
        }

        return s.top();
    }
};