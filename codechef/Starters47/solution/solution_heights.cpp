#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL);
#define int long long
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n,0);
    unordered_map<int,int> cnt;
    int mx=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        cnt[arr[i]]++;
        mx=max(mx, arr[i]);
        
    }
    int res=0;
    int mxcnt=0;
    for(auto i:cnt)
    {
        if(i.second ==1)
        res++;
        mxcnt=max(mxcnt ,i.second);
    }
    if(res%2)
    {
        int y=(res+1)/2;
        if( cnt[mx]==1)
        {
            if(mxcnt==2)
            y++;
        }
        cout<<y<<endl;
    }else{
        
        int y=res/2;
        cout<<y<<endl;
    }
    
    }
    
    signed main()
    {
        // #ifndef ONLINE_JUDGE
        // freopen("input.txt","r",stdin);
        // freopen("output.txt","w",stdout);
        // #endif
        fastio
        int t;
        t=1;
        cin>>t;
        while(t--){
            solve();
        }
    }
    
