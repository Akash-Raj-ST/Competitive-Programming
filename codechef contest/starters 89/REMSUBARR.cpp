// https://www.codechef.com/problems/REMSUBARR

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>

#define ll long long int
using namespace std;

const ll M = 1e9 + 7;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> arr(n);

        for(int i=0;i<n;i++){   
            cin>>arr[i];
        }

        int left=0,right=n-1,_max=0,size=0;

        while(left < right){
            int _min = min(arr[left],arr[right]);
            _max = max(_max,_min);
            size++;

            if(size==_max){
                cout<<n-size<<'\n';
                break;
            }else{
                if(arr[left]==_min) left++;
                else right--;
            }
        }

    }
}