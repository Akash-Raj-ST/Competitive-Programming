class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        for(auto it:words){
            string prev = it;
            reverse(it.begin(),it.end());

            if(it == prev) return prev;
        }
        return "";
    }
};