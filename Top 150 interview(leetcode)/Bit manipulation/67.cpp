class Solution {
public:
    string addBinary(string a, string b) {

        if(b.length()>a.length()){
            string temp = a;
            a =b;
            b = temp;
        }

        string ans = "";
        int rem = 0;
        int a_dig = a.length()-1,b_dig = b.length()-1;

        while(a_dig>=0 && b_dig>=0){
            if(a[a_dig]=='1' && b[b_dig]=='1'){
                if(rem) ans = "1"+ans;
                else{
                    rem =1;
                    ans = "0"+ans;
                }
            }
            else if(a[a_dig]=='1' && b[b_dig]=='0'){
                if(rem) ans = "0"+ans;
                else ans = "1"+ans;
            }
            else if(a[a_dig]=='0' && b[b_dig]=='1'){
                if(rem) ans = "0"+ans;
                else ans = "1"+ans;
            }else{
                if(rem){
                    ans = "1"+ans;
                    rem=0;
                }else{
                    ans = "0"+ans;
                }
            }
            a_dig--;
            b_dig--;
        }

        while(a_dig>=0){
            if(rem){
                if(a[a_dig]=='0'){
                    ans = "1"+ans;
                    rem = 0;
                }else{
                    ans = "0"+ans;
                }
            }else{
                ans = a[a_dig]+ans;
            }
            a_dig--;
        }

        if(rem) ans = "1"+ans;
        return ans;
    }
};