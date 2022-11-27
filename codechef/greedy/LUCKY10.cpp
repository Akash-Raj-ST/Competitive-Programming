// https://www.codechef.com/submit/LUCKY10

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long int
using namespace std;


const ll M=1e9+7;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        string a,b;
        cin>>a>>b;

        int i,n=a.length();
        int fours_a=0,sevens_a=0,fours_b=0,sevens_b=0;
        int less_4_a=0,less_7_a=0,less_4_b=0,less_7_b=0;

        for(i=0;i<n;i++){
            if(a[i]=='7') seven_a++;
            else if(a[i]=='4') fours_a++;
            else if(stoi(a[i]<4)) less_4_a++;
            else if(stoi(a[i]<7)) less_7_a++;

            if(b[i]=='7') seven_b++;
            else if(b[i]=='4') fours_b++;
            else if(stoi(b[i]<4)) less_4_b++;
            else if(stoi(b[i]<7)) less_7_b++;
        }


        int sevens=0,fours=0;

        sevens += min(sevens_a,less_7_b);
        sevens_a -= min(sevens_a,less_7_b);

    }
}