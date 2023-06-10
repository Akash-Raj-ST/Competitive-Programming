class Solution {
public:
    string makeSmallestPalindrome(string s) {
        
        for(int i=0;i<s.length()/2;i++){
            if(s[i]!=s[s.length()-1-i]){
                if(s[i]<s[s.length()-1-i]){
                    s[s.length()-1-i] = s[i];
                }else{
                    s[i] = s[s.length()-1-i];
                }
            }
        }
        
        return s;
    }
};