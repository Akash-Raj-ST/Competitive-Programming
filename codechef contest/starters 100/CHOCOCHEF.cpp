#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    if(n&1){
	        cout<<"2 2 "<<n-4<<'\n';
	    }else{
	        cout<<"1 1 "<<n-2<<'\n';
	    }
	}
}
