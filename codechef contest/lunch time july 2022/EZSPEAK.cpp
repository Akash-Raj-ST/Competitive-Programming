#include <iostream>
#include <set>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n;
        string s;
        cin>>n>>s;

        set<char> vowels({'a','e','i','o','u'});

        int count=0;
        bool easy=true;

        for(int i=0;i<n;i++){
            //found
            if(vowels.count(s[i])==0){
                count++;
            }else count = 0;

            if(count==4){
                easy=false;
                break;
            }
        }

        if(easy) cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
}