class Solution {
public:

    int value(string s){
        char c = s[0];

        for(int i=1;i<s.length();i++){
            if(s[i]<c) c=s[i];
        }

        int count = 0;

        for(int i=0;i<s.length();i++){
            if(s[i]==c) count++;
        }

        return count;
    }


    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int> q(queries.size());
        vector<int> w(words.size());

        for(int i=0;i<queries.size();i++){
            q[i] = value(queries[i]);
        }

        for(int i=0;i<words.size();i++){
            w[i] = value(words[i]);
        }


        vector<int> ans(queries.size(),0);

        for(int i=0;i<q.size();i++){
            for(int j=0;j<w.size();j++){
                if(q[i]<w[j]) ans[i]++;
            }
        }
        return ans;
    }
};