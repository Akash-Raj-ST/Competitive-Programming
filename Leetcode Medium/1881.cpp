// https://leetcode.com/problems/maximum-value-after-insertion/

class Solution {
public:
    string maxValue(string n, int x) {
        
        string ans;
        int i;
        bool found = false;
        if(n[0]=='-'){
            ans = "-";
            for(i=1;i<n.length();i++){
                if(n[i]-'0'>x){
                    ans += to_string(x);
                    found = true;
                    break;
                }
                ans += n[i];
            }

            for(i=i;i<n.length();i++){
                ans += n[i];
            }

            if(!found){
                ans += to_string(x);
            }
        }else{
            for(i=0;i<n.length();i++){
                if(n[i]-'0'<x){
                    ans += to_string(x);
                    found = true;
                    break;
                }
                ans += n[i];
            }

            for(i=i;i<n.length();i++){
                ans += n[i];
            }

            if(!found){
                ans += to_string(x);
            }
        }

        return ans;
    }
};