class Solution {
public:
    vector<string> ans;

    void backtrack(map<char,vector<char>> &mp,string output,int pos,string digits){
        if(pos>=digits.length()) return;

            for(auto it:mp[digits[pos]]){
                output += it;
                backtrack(mp,output,pos+1,digits);
                if(pos==digits.length()-1) ans.push_back(output);
                output.pop_back();
            }
    }

    vector<string> letterCombinations(string digits) {
        map<char,vector<char>> mp= {
            {'2',vector<char>{'a','b','c'}},
            {'3',vector<char>{'d','e','f'}},
            {'4',vector<char>{'g','h','i'}},
            {'5',vector<char>{'j','k','l'}},
            {'6',vector<char>{'m','n','o'}},
            {'7',vector<char>{'p','q','r','s'}},
            {'8',vector<char>{'t','u','v'}},
            {'9',vector<char>{'w','x','y','z'}},
        };

       backtrack(mp,"",0,digits);
       return ans;
    }
};