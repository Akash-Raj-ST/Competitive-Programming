class Solution {
public:
    string reverseWords(string s) {
        vector<string> arr;

        string str="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                if(str!="" && str!=" ") arr.push_back(str);
                str = "";
                continue;
            }
            str +=  s[i];
        }

        if(s[s.length()-1]!=' ') arr.push_back(str);

        string ans;

        for(int i=arr.size()-1;i>=0;i--){
            ans += arr[i];

            if(i>0) ans+=" ";
        }
        return ans;
    }
};