#include <iostream>
#include <vector>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        string a,b;
        cin>>a>>b;

        int a_len = a.length();
        int b_len = b.length();
        

        int s = 0;
        bool found = false;

        if(a_len<b_len){

            for(int i=0;i<b_len;i++){
                if(b[i]==a[s]){
                    s++;
                    if(s==a_len){
                        found = true;
                        break;
                    }
                }
            }
        }else{
            for(int i=0;i<a_len;i++){
                if(b[s]==a[i]){
                    s++;
                    if(s==b_len){
                        found = true;
                        break;
                    }
                }
            }
        }

        if(found){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        cout<<"\n";
    }   
}