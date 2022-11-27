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
        int n;
        cin>>n;

        int type,team1,team2;
        
        int a=-1,b=-1;

        while(n--){
            cin>>type>>team1>>team2;

            if(type==1){
                cout<<"YES\n";
                a=team1;
                b=team2;
            }else{
                if(team1==team2){ 
                    cout<<"YES\n";
                    a = team1;
                    b = team1;
                }
                else{
                    if(team1>a && team2>a && team1>b && team2>b){
                        cout<<"NO\n";
                    }else{
                        cout<<"YES\n";
                        if(team1<a){
                            a = team2;
                            b = team1;
                        }else{
                            a = team1;
                            b = team2;
                        }
                    }
                }
            }
        }
    }
}