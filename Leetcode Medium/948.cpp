class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int ans = 0;

        sort(tokens.begin(),tokens.end());

        int start=0,end=tokens.size()-1;

        while(start<=end){
            if(tokens[start]<=power){
                ans++;
                power -= tokens[start++];
                cout<<"up ";
            }
            else if(start==end || start==end+1){
                cout<<"break ";
                break;
            }
            else if(ans>0){
                power+=tokens[end--];
                ans--;
                cout<<"down ";
            }else{
                break;
            }
        }

        return ans;
    }
};