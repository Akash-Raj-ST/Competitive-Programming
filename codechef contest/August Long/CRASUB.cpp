#include <iostream>
#include <vector>
#include <string>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        string s,prev_s=" ";
        cin>>s;
        
        int p1=0,p2=s.size()-1;

        string a = "";
        string b = "";

        while(p2-p1>=2){
            if(s[p1]=='0'){
                if(s[p2]=='0'){
                    p1++;
                    p2--;
                }else{
                    if(s[p2+1]=='1'){
                        p1++;
                        p2--;
                    }else{
                        a += '0';
                        p2--;
                    }
                }
            }else{
                //p1==1
                if(s[p2]=='0'){
                    a += '1';
                    p1++;
                }else{
                    a += '1';
                    b += '1';
                    p1++;
                    p2--;
                }
            }
            
        }
        a += s.substr(p1,p2-p1+1);

        for(int i=b.size()-1;i>=0;i--) a+=b[i];

        cout<<a;
       
    }
}