class Solution {
public:
    int minLength(string s) {
        string ans;
        
        while(s.length()>0){
            bool found = false;
            for(int i=0;i<s.length();i++){
                if(i==s.length()-1){
                    ans += s[i];
                    break;
                }
                
                if(s[i]=='A' && s[i+1]=='B'){
                    i+=1;
                    found = true;
                }
                else if(s[i]=='C' && s[i+1]=='D'){
                    i+=1;
                    found = true;
                }else{
                    ans += s[i];
                }
            }
            // cout<<ans<<' ';
            if(!found) break;
            else{ 
                s = ans;
                ans = "";
            }
        }
        
        return ans.length();
        
    }
};