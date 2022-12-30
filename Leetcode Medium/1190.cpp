#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string rev(string s){
        string ans;

        for(int i=s.length()-1;i>=0;i++){
            ans += s[i];
        }

        return ans;
    }

    string reverseParentheses(string s) {
        int count = 0;
        int n = s.length();
        string ans;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                count++;
                continue;
            }

            int j;
            string temp;
            for(j=i;j<n;j++){
                if(s[j]==')') break;
                temp += s[j];
            }
            i = j;

            if(count%2==1){
                ans += rev(temp);
            }else{
                ans += temp;
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    cout<<s.reverseParentheses("(ed(et(oc))el)");
}