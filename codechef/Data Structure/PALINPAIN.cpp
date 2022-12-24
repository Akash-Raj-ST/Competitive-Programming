#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>

#define ll long long int
using namespace std;


const ll M=1e9+7;


int main(){
     #ifndef ONLINE_JUDGE
       freopen("../../input.txt","r",stdin); 
       freopen("../../output.txt","w",stdout);
    #endif
    
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
    	int n,m;
    	cin>>n>>m;

    	if((n%2==1 && m%2==1) || (n==1 || m==1)){
    		cout<<-1<<'\n';
    		continue;
    	}

    	string s1,s2;
    	int first,second;

    	if(n%2!=0){
 
	    	for(int i=0;i<m/2;i++){
	    		s1 += 'b';
	    	}
	    	for(int i=0;i<n;i++){
	    		s1 += 'a';
	    	}
	    	for(int i=0;i<m/2;i++){
	    		s1 += 'b';
	    	}

	    	s2=s1;

	    	first = m/2-1;
	    	second = m/2;

	    	s2[first] = 'a';
	    	s2[second] = 'b';

	    	first = m/2+n-1;
	    	second = m/2+n;

	    	s2[first] = 'b';
	    	s2[second] = 'a';

	    }else{
	    	for(int i=0;i<n/2;i++){
	    		s1 += 'a';
	    	}
	    	for(int i=0;i<m;i++){
	    		s1 += 'b';
	    	}
	    	for(int i=0;i<n/2;i++){
	    		s1 += 'a';
	    	}
	    	s2=s1;

	    	first = n/2-1;
	    	second = n/2;

	    	s2[first] = 'b';
	    	s2[second] = 'a';

	    	first = n/2+m-1;
	    	second = n/2+m;

	    	s2[first] = 'a';
	    	s2[second] = 'b';
	    }

    	cout<<s1<<'\n'<<s2<<'\n';
    }
}