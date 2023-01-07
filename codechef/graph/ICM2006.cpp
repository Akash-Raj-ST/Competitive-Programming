#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>

#define ll long long int
using namespace std;


const ll M=1e9+7;

char position(char curr,char value){
	switch(curr){
		case 'r':
			if(value=='0') return 'r';
			else return 'b';

		case 'b':
			if(value=='0') return 'y';
			else return 'b';

		case 'y':
			if(value=='0') return 'p';
			else return 'b';

		case 'p':
			if(value=='0') return 'g';
			else return 'b';

		case 'g':
			if(value=='0') return 'r';
			else return 'b';
	}
}
int main(){
     #ifndef ONLINE_JUDGE
       freopen("../input.txt","r",stdin); 
       freopen("../output.txt","w",stdout);
    #endif
    
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
    	string s;
    	cin>>s;

    	int n = s.length();

    	char curr = 'r';
    	for(int i=0;i<n;i++){
    		curr = position(curr,s[i]);
    	}

    	if(curr=='g') cout<<"YES\n";
    	else cout<<"NO\n";
    }
}
	