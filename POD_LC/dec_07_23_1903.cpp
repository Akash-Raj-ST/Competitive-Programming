class Solution {
public:
    string largestOddNumber(string num) {
        int index = -1;

        for(int i=num.length()-1;i>=0;i--){
            if(int(num[i])%2==1){
                index = i;
                break;
            }
        }
        
        return num.substr(0,index+1);
    }
};