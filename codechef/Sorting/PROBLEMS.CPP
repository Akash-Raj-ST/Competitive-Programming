// https://www.codechef.com/submit/PROBLEMS?tab=statement

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long int
using namespace std;


const ll m=1e9+7;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    
        int p,s;
        cin>>p>>s;

        vector<pair<int,int>> arr,ans;
        vector<int> score(s),solved(s);

        for(int i=0;i<p;i++){
            for(int j=0;j<s;j++){
                cin>>score[j];
            }
            for(int j=0;j<s;j++){
                cin>>solved[j];
            }

            for(int j=0;j<s;j++){
                arr.push_back({score[j],solved[j]});
            }

            sort(arr.begin(),arr.end());

            int count=0;
            for(int j=0;j<s-1;j++){
                if(arr[j].second>arr[j+1].second) count++;
            }

            ans.push_back({count,i});

            arr.clear();
        }

        sort(ans.begin(),ans.end());

        for(auto it: ans){
            cout<<it.second+1<<"\n";
        }
    
}