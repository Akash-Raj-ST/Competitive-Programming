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
        int n,k,s;
        cin>>n>>k>>s;

        int sundays = n/7;
        int totalChoc = n*(s-sundays);
        int required = n*k;

        if(totalChoc<required){
            cout<<-1<<"\n";
            continue;
        }

        if(required%n==0)
            cout<<required/n<<"\n";
        else
            cout<<required/n+1<<"\n";

    }
}