#include<bits/stdc++.h> 
#include<ext/pb_ds/assoc_container.hpp> 
#include<ext/pb_ds/tree_policy.hpp> 
 
typedef long long int ll; 
 
using namespace std; 
using namespace chrono; 
using namespace __gnu_pbds; 

 
bool solve( string str){ 
    if(str.size() == 0 || str.size() == 1) return true; 
    if(str.size()%2 != 0){ 
        return solve(str.substr(0,str.size() -1)); 
    } 
    if(str.substr(0,str.size()/2) == str.substr(str.size()/2,str.size())){ 
        return solve(str.substr(0,str.size()/2)); 
    } 
    return false; 
} 
 
ll t,n; 
 
int main(){ 
    cin >> t; 
    while(t--){ 
        cin >> n; 
        string str; 
        cin >> str; 
        if(n == 0 || n== 1){ 
            cout << "YES" << endl; 
            continue; 
        } 
        bool op = solve(str); 
        if(op) cout << "YES" << endl; 
        else cout << "NO" << endl; 
    } 
    return 0; 
}