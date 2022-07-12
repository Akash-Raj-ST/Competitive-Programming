#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
        map<int,int> mp;
        int n,num;
        cin>>n;

        for(int i=0;i<n;i++){
            cin>>num;
            if(mp.find(num)!=mp.end()){
                mp[num]+=1;
            }else{
                mp.insert({num,1});
            }
        }

        vector<int> vec;
        for(auto itr=mp.begin();itr!=mp.end();itr++){
            vec.push_back(itr->second);
        }
        if(n==2){
            cout<<0<<"\n";
        }
        else{

            sort(vec.begin(),vec.end());

            int count=0;
            for(auto itr=vec.begin();itr!=vec.end()-1;itr++){
                if(itr==vec.end()-2 && *itr==1 && *(itr+1)==1) break;
                count+=*(itr);
            }
            cout<<count<<"\n";
        }
}

void solve2(){
    int n,num;
    cin>>n;

    map<int,int> mp;

    for(int i=0;i<n;i++){
        cin>>num;
        mp[num]++;
    }

    int ans=n,count=0;
    for(auto ele:mp){
        ans = min(ans,n-ele.second);
        count++;
    }

    if(count>=2)
        cout<<min(ans,n-2)<<"\n";
    else
        cout<<ans<<"\n";

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        //solve();
        solve2();
    }
}

