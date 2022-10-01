#include <iostream>
#include <vector>
#include <queue>
#include <list>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int> row(n+1,0);
        vector<int> column(n+1,0);

        int r,c;
        for(int i=0;i<k;i++){
            cin>>r>>c;
            r--;
            c--;
            row[r] = 1;
            column[c] = 1;
        }

        vector<int> r_row;
        vector<int> r_column;

        for(int i=0;i<n;i++)
            if(row[i]==0) r_row.push_back(i);

        for(int i=0;i<n;i++)
            if(column[i]==0) r_column.push_back(i);

        cout<<n-k<<" ";

        for(int i=0;i<n-k;i++){
            cout<<r_row[i]+1<<" "<<r_column[i]+1<<" ";
        }
       
        
        cout<<"\n";
    }
}