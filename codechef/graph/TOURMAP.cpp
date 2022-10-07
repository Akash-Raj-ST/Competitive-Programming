#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>

#define ll long long int
using namespace std;

void recursive(stack<string> &st,unordered_map<string,bool> &visited,unordered_map<string,pair<string,int>> mp,string place){
    if(visited[place]) return;

    visited[place] = true;

    if(mp[place].first.length()>0) recursive(st,visited,mp,mp[place].first);
    
    st.push(place);

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

        string a,b,temp;
        int c;

        unordered_map<string,int> from;
        unordered_map<string,int> to;

        unordered_map<string,pair<string,int>> mp;

        int total=0;
        for(int i=0;i<n-1;i++){
            cin>>a>>b>>c>>temp;

            from[a] = i;
            to[b] = i;
            mp[a] = {b,c};

            total += c;
        }

        string start_city;
        for(auto place:from){
            if(to.find(place.first)==to.end()){
                start_city = place.first;
                break;
            }
        }
        
        while (mp.find(start_city)!=mp.end())
        {
            cout<<start_city<<" "<<mp[start_city].first<<" "<<mp[start_city].second<<"$\n";
            start_city = mp[start_city].first;
        }

        cout<<total<<"$\n";
        
    }
}