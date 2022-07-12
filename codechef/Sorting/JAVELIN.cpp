#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool compare(const pair<int,int> a,const pair<int,int> b){
    return a.first>b.first;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n,m,x,value;
        cin>>n>>m>>x;

        vector<int> qualified;
        vector<pair<int,int>> rem;

        for(int i=0;i<n;i++){
            cin>>value;

            if(value>=m){
                qualified.push_back(i+1);
            }else{
                rem.push_back({value,i});
            }
        }

        sort(rem.begin(),rem.end(),compare);

        int count=0,limit=x-qualified.size();

        for(auto p:rem){
            if(count>=limit) break; 
            qualified.push_back(p.second+1);
            count++;
        }
        
        sort(qualified.begin(),qualified.end());
        cout<<qualified.size()<<" ";
        for(int n:qualified){
            cout<<n<<" ";
        }
        cout<<"\n";
        
            
    }
}