#include <iostream>
#include <map>
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
        int x,y;
        map<int,int> mp_x;
        map<int,int> mp_y;

        for(int i=0;i<(4*n)-1;i++){
            cin>>x>>y;
            if(mp_x.find(x)!=mp_x.end()){
                mp_x[x] += 1;
            }else{
                mp_x.insert({x,1});
            }
            if(mp_y.find(y)!=mp_y.end()){
                mp_y[y] += 1;
            }else{
                mp_y.insert({y,1});
            }
        }

        for(auto itr=mp_x.begin();itr!=mp_x.end();itr++){
            if(itr->second%2==1){
                cout<<itr->first<<" ";
                break;
            }
        }
        for(auto itr=mp_y.begin();itr!=mp_y.end();itr++){
            if(itr->second%2==1){
                cout<<itr->first<<"\n";
                break;
            }
        }

    }
}