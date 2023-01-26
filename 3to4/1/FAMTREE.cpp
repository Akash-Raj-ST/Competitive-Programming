#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
	 #ifndef ONLINE_JUDGE
       freopen("../../input.txt","r",stdin); 
       freopen("../../output.txt","w",stdout);
    #endif
    
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);


	int n;
	cin>>n;
	
	int root = 0;
	
	vector<int> wealth(n);
	vector<vector<int>> arr(n);
	
	for(int i=0;i<n;i++) cin>>wealth[i];
	
	int node;
	for(int i=0;i<n;i++){
	    cin>>node;
	    if(node==-1){
	       root = i;
	    }else{
	       node -=1 ;
	       arr[node].push_back(i);
	    }
	}
	
	queue<vector<int>> q;
	
	q.push({root,wealth[root],wealth[root]});

	int max_diff = 0;

	while(!q.empty()){
	    int root_node = q.front()[0];
	    int root_max = q.front()[1];
	    int root_min = q.front()[2];
	   	q.pop();

	    for(auto it:arr[root_node]){
	    	int new_min=root_min,new_max=root_max;

	        int diff1 = abs(root_max-wealth[it]);
	        int diff2 = abs(root_min-wealth[it]);
	        
	        if(diff1>max_diff) max_diff=diff1;
	        if(diff2>max_diff) max_diff=diff2;
	        
	        if(wealth[it]<root_min) new_min = wealth[it];
	        if(wealth[it]>root_max) new_max = wealth[it];
	        
	        q.push({it,new_max,new_min});
	        
	    }
	}
	
	cout<<max_diff<<'\n';
}
