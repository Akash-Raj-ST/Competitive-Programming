#include <iostream>
#include <vector>
#define ll long long int
using namespace std;

int min(int a,int b){
    if(a>b) return b;
    return a;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string a,b;
        cin>>a>>b;

        int both=0,prg=0,eng=0,noth=0;

        for(int i=0;i<n;i++){
            if(a[i]=='0'){
                if(b[i]=='0'){
                    noth++;
                }else{
                    eng++;
                }
            }else{
                if(b[i]=='0'){
                    prg++;
                }else{
                    both++;
                }
            }
        }
        //pairing 11 with 00
        int total = min(both,noth);
        both = both-noth;

        //pairing 10 with 01
        total += min(prg,eng);
        int rem2 = prg-eng;

        if(rem2<0) rem2=rem2*-1;

        if(both>0) total += min(both,rem2);
        both = both-rem2;

        if(both>0){
            total += both/2;
        }
        cout<<total<<"\n";
    }
}