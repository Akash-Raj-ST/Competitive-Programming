#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#define ll long long int
using namespace std;


const ll M=1e9+7;
int n,m;

bool valid(int x,int y){
	if(x>=0 && y>=0 && x<n && y<m) return true;
	return false;
}
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
    	cin>>n>>m;

    	vector<vector<int>> arr(n+1,vector<int>(m+1));


    	int max=0;

    	for(int i=0;i<n;i++){
    		for(int j=0;j<m;j++){
    			cin>>arr[i][j];
    			if(arr[i][j]>max) max = arr[i][j];
    		}
    	}

    	queue<pair<int,int>> q;

    	for(int i=0;i<n;i++){
    		for(int j=0;j<m;j++){
    			if(arr[i][j]==max){
    				q.push({i,j});
    			}
    		}
    	}

    	vector<pair<int,int>> moves = {{0,1},{1,0},{-1,0},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};
    	pair<int,int> move;

    	int count = 0;
    	int x,y;
    	while(!q.empty()){

    		bool found = false;
    		int size = q.size();

    		while(size--){
				move = q.front();
				q.pop();

				for(int i=0;i<8;i++){	
	    			x = move.first+moves[i].first;
	    			y = move.second+moves[i].second;

	    			if(valid(x,y) && arr[x][y]!=max){
	    				q.push({x,y});
	    				arr[x][y] = max;
	    				found = true;
	    			}
				}
    		}

    		if(!found) break;

    		count++; 
    	}
    	cout<<count<<'\n';
    }
}
