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
        int n,num;
        cin>>n;

        int first = -1,second = -1;

        while(n--){
            cin>>num;
            if(num>first){
                second = first;
                first = num;
            }else if(num>second && num!=first){
                second = num;
            }
        }

        if(second==-1) cout<<0<<"\n";
        else cout<<second%first<<"\n";
    }
}