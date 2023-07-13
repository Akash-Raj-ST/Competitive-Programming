class Solution {
public:

    int min(int a,int b){
        if(a<b) return a;
        return b;
    }

    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();

        int min_len = 200;

        for(auto it:strs) min_len = min(min_len,it.length());

        string ans;
        for(int i=0;i<min_len;i++){
            char ch = strs[0][i];
            bool same = true;
            for(auto it:strs){
                if(it[i]!=ch){
                    same = false;
                    break;
                }
            }

            if(same) ans+=ch;
            else break;
        }

        return ans;
    }
};