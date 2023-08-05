class Solution {
public:

    string minWindow(string s, string t) {
        unordered_map<char,int> mp_s;
        unordered_map<char,int> mp_t;

        int have=0,needed=0;
        for(auto it:t){
            mp_t[it]++;
            if(mp_t[it]==1) needed++;
        }

        int start = 0;
        int ans_len = s.length();
        string ans = "";

        int pt=0;
        
        for(int i=0;i<s.length();i++){
            if(mp_t.find(s[i])!=mp_t.end()){
                mp_s[s[i]]++;

                if(mp_s[s[i]]==mp_t[s[i]]) have++;

                if(have==needed){
                    int new_len = (i-pt)+1;
                    if(new_len<=ans_len){
                        ans_len = new_len;
                        ans = s.substr(pt,ans_len);
                    }

                    while(pt<s.length()){
                        if(mp_t.find(s[pt])!=mp_t.end()){
                            mp_s[s[pt]]--;

                            if(mp_s[s[pt]]<mp_t[s[pt]]){
                                have--; 
                                pt++;
                                break;
                            }
                        }
                        pt++;
                        new_len = (i-pt)+1;
                        if(new_len<=ans_len && new_len<10e3+900){
                            ans_len = new_len;
                            ans = s.substr(pt,ans_len);
                        }
                    }
                }
            }
        }
        return ans;
    }
};