#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    
	    if(a==b){
	        cout<<"ANY";
	    }
	    else if(a<b){
	        cout<<"FIRST";
	    }else{
	        cout<<"SECOND";
	    }
	    cout<<'\n';
	}
}
