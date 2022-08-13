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
        int a,b;
        cin>>a>>b;

        int A = a>b?a:b;
        int B = a<b?a:b;
        int value,prev;

        if(A==B){
            cout<<"YES";
        }

        else
            if(A%b==0){
                int n = A/B;
                prev=B;

                for(int i=1;i<=n;i++){
                    value = prev*2;
                    if(value==A){
                        cout<<"YES";
                        break;
                    }

                    if(value>A){
                        cout<<"NO";
                        break;
                    }
                    prev = value;
                }
            }else{
                cout<<"NO";
            }

        cout<<"\n";
    }
}