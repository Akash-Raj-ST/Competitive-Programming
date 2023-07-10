class Solution {
public:
    int lengthOfLastWord(string s) {
        bool str_reached = false;

        string ans;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]==' '){
                if(str_reached) break;
            }else{
                str_reached = true;
                ans += s[i];
            }
        }

        
        return ans.length();
    }
};