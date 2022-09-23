#include <iostream>
#include <vector>
#include <queue>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int r,g,b,m;

        priority_queue<int> pq;

        cin>>r>>g>>b>>m;

        int num,r_max,g_max,b_max;
        int max = -1;

        while(r--){
            cin>>num;
            if(num>max){
                max = num;
                r_max = num;
            }
        }

        max = -1;
        while(g--){
            cin>>num;
            if(num>max){
                max = num;
                g_max = num;
            }
        }

        max = -1;
        while(b--){
            cin>>num;
            if(num>max){
                max = num;
                b_max = num;
            }
        }

        pq.push(r_max);
        pq.push(g_max);
        pq.push(b_max);

        while(m--){
            num = pq.top();
            pq.pop();
            pq.push(num/2);
        }

        cout<<pq.top()<<"\n";
    }
}