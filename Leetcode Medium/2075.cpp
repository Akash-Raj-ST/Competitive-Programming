// https://leetcode.com/problems/decode-the-slanted-ciphertext/description/

class Solution {
public:
    bool empty(string s){
        for(int i=0;i<s.length();i++){
            if(s[i]!=' ') return false;
        }
        return true;
    }

    string trim_right(string s){
        int n = s.length();

        for(int i=n-1;i>=0;i--){
            if(s[i]==' ') n--;
            else break;
        }

        string ans="";
        for(int i=0;i<n;i++){
            ans += s[i];
        }

        return ans;
    }

    string decodeCiphertext(string encodedText, int rows) {
        int len = encodedText.length()/rows;
        vector<string> str;
        vector<string> ans;

        string s;
        for(int i=0;i<encodedText.length();i++){
            s += encodedText[i];

            if((i+1)%len==0){ 
                str.push_back(s);
                s = "";
            }

        }

        for(int i=0;i<len;i++){
            s = "";
            for(int j=0;j<rows;j++){
                if((j+i)>=len) break;
                s += str[j][j+i];
            }
            ans.push_back(s);            
        }

        int ans_len = len;

        for(int i=len-1;i>=0;i--){
            if(empty(ans[i])) ans_len--;
            else break;
        }

        if(ans_len>0) ans[ans_len-1] = trim_right(ans[ans_len-1]);

        string ans_str;
        for(int i=0;i<ans_len;i++){
            ans_str += ans[i];
        }
        return ans_str;
    }
};