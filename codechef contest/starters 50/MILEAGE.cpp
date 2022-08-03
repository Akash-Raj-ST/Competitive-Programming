#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        float n,petrol,diesel,dis_p,dis_d;
        cin>>n>>petrol>>diesel>>dis_p>>dis_d;

        float pet_price = (n/dis_p)*petrol;
        float die_price = (n/dis_d)*diesel;

        if(pet_price==die_price) cout<<"ANY";
        else if(pet_price>die_price) cout<<"DIESEL";
        else cout<<"PETROL";

        cout<<"\n";
    }
}