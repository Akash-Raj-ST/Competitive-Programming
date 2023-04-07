class Solution {
public:
    map<string,bool> mp;

    bool solve(string s1,string s2){

        if(s1.length()==1) return s1==s2;
        if(s1==s2) return true;

        if(mp.find(s1+s2)!=mp.end()){
            return mp[s1+s2];
        }

        for(int i=1;i<s1.length();i++){
            if(
               ( solve(s1.substr(0,i),s2.substr(0,i)) && solve(s1.substr(i),s2.substr(i)))
               ||
               ( solve(s1.substr(0,i),s2.substr(s1.length()-i)) && solve(s1.substr(i),s2.substr(0,s1.length()-i)))
            ){  
                mp[s1+s2] = true;
                return true;
            }
        }
        mp[s1+s2] = false;
        return false;

    }

    bool isScramble(string s1, string s2) {
        if(solve(s1,s2)){
            return true;
        }
        return false;
    }
};