#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int a1,a2,b1,b2;
	    cin>>a1>>a2>>b1>>b2;
	    
	    if(a1+b1<a2+b2) cout<<"YES\n";
	    else cout<<"NO\n";
	}
}
