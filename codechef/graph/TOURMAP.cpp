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

        unordered_map<string,pair<string,int>> mp;
        unordered_map<string,bool> visited;

        int total=0;
        for(int i=0;i<n-1;i++){
            cin>>a>>b>>c>>temp;

            mp[a] = {b,c};
            visited[a] = false;

            total += c;
        }

        stack<string> st;

        for(auto it:mp){
            if(!visited[it.first])
                recursive(st,visited,mp,it.first);
        }

        while (st.size()>1)
        {
            string p = st.top();
            st.pop();

            cout<<p<<" "<<mp[p].first<<" "<<mp[p].second<<"$\n";
        }

        cout<<total<<"$\n";
        
    }
}