class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;

        vector<vector<char>> arr(numRows);
        
        bool down;
        int count = 0;
        
        for(int i=0;i<s.length();i++){
            if(count==numRows-1){
                down = false;
            }
            else if(count==0){
                down = true;
            }

            arr[count].push_back(s[i]);

            if(down){
                count++;
            }else{
                count--;
            }
        }

        string ans;

        for(int i=0;i<numRows;i++){
            for(auto ch:arr[i]){
                ans += ch;
            }
        }

        return ans;
    }
};