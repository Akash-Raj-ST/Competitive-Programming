#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	   int  a[n];
	   int  b[n];
	   int z =0,o=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]==0)
	        z++;
	        else
	        o++;
	    }
	    for(int j=0;j<n;j++)
	    {
	        cin>>b[j];
	    }
	    if(a[0]!=b[0] || a[n-1] != b[n-1])
	    {
	        cout<<"NO"<<endl;
	        continue;
	    }
	    
	    int sol = 0;
	    for(int i =1 ; i<n-1 ;i++)
	    {
	        if(a[i]!=b[i] && a[i]==0 && o ==0)
	        {
	            cout<<"NO"<<endl;
	            sol = 1;
	            break;
	        }
	        if(a[i]!=b[i] && a[i]==1)
	        {
	            cout<<"NO"<<endl;
	            sol = 1;
	            break;
	        }
	    }
	    if(sol==0)
	    {
	        cout<<"YES"<<endl;
	    }
	}
	
	return 0;
}