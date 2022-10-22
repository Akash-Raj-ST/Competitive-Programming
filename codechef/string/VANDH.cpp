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
        int hills,valley,max,min;
        cin>>hills>>valley;

        string ans = "",seq1,seq2;

        if(hills>valley){ 
            max = hills;
            min = valley;
            ans += '0';
            seq1 = "10";
            seq2 = "010";
        }
        else{
            max = valley;
            min = hills;
            ans += '1';
            seq1 = "01";
            seq2 = "101";
        }

        if(hills==valley) min--;
        
        for(int i=0;i<min+1;i++){
            ans += seq1;
        }
        for(int i=1;i<max-min;i++){
            ans += seq2;
        }

        if(hills==valley) ans += '0';

        cout<<ans.length()<<"\n";
        cout<<ans<<"\n";
    }
}