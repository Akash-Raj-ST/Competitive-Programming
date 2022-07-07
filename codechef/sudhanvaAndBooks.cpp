#include <iostream>
#include <stack>
using namespace std;
//https://www.codechef.com/LP2TO304/problems/SUDBOOKS
int main(){
    int t;
    cin>>t;

    int q;
    stack<int> s;

    while (t-->0)
    {
        cin>>q;
        if(q==-1){
            if(s.empty()) cout<<"kuchbhi?";
            else{ 
                cout<<s.top(); 
                s.pop();
            }
        }else{
            cin>>q;
            s.push(q);
        }

    }
    
}