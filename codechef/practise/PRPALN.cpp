#include <iostream>
#include <vector>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int n=s.length();

        int l=0,h=n-1;

        bool flag = false;
        while(l<h){
            if(s[l]==s[h]){
                l++;
                h--;
            }else{
                bool pal1 = true,pal2=true;
                int temp = h-1;
                int i = l;
                while(i<temp){
                    if(s[i]!=s[temp--]){
                        pal1 = false;
                        break;
                    }
                    i++;
                }

                if(pal1) break;

                temp = h;
                i = l+1;
                while(i<temp){
                    if(s[i]!=s[temp--]){
                        pal2 = false;
                        break;
                    }
                    i++;
                }

                if(!pal2){
                    flag = true;
                }

                break;
            }
        }

        if(!flag) cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
}