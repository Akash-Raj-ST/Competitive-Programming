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
        int speed,son,father;
        float markers,t;
        cin>>speed>>son>>father>>markers>>t;

        float dist = markers*50;

        float  o_speed = (dist*3600)/(t*1000)+speed;

        float diff1 = abs(o_speed-son);
        float diff2 = abs(o_speed-father);

        string ans = diff1<diff2?"SEBI":"FATHER";
        if(diff1==diff2) ans="DRAW";
        
        cout<<ans<<"\n";
    }   
}