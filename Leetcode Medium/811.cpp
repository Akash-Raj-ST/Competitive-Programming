// https://leetcode.com/problems/subdomain-visit-count/description/

class Solution {
public:

    vector<string> split(string str,char c){
        vector<string> ans;

        string s;
        for(int i=0;i<str.length();i++){
            if(str[i]=='.'){
                ans.push_back(s);
                s = "";
                continue;
            }

            s += str[i];
        }
        ans.push_back(s);
        return ans;
    }

    vector<string> subdomainVisits(vector<string>& cpdomains) {
        map<string,int> mp;

        for(int i=0;i<cpdomains.size();i++){
            string cnt;
            int pos = 0;
            //count
            for(pos=0;pos<cpdomains[i].length();pos++){
                if(cpdomains[i][pos]==' ') break;
                cnt += cpdomains[i][pos];
            }
            int count = stoi(cnt);

            string s;

            for(pos=pos+1;pos<cpdomains[i].length();pos++){
                s += cpdomains[i][pos];
            }

            mp[s] += count;

            vector<string> s_arr = split(s,'.');

            s = s_arr[1];
            if(s_arr.size()>2){
                s += ".";
                s += s_arr[2];
                mp[s_arr[2]] += count;
            }

            mp[s] += count;
        }

        vector<string> ans;

        for(auto it: mp){
            string s;
            s += to_string(it.second);
            cout<<it.second<<"\n";
            s += " ";
            s += it.first;
            ans.push_back(s);
        }
        return ans;
    }
};