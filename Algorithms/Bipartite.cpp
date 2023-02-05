#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>

#define ll long long int
using namespace std;


const ll M=1e9+7;

int v,e; //Vertices and edges

bool isBipartite(vector<vector<int>> arr,int src){
	vector<int> color(v,-1);

	color[src] = 1;

	queue<int> q;
	q.push(src);

	while(!q.empty()){
		int vertice = q.front();
		q.pop();

		for(auto it: arr[vertice]){
			if(color[it]==-1){
				q.push(it);
				color[it] = !color[vertice];
			}else{
				if(color[it]==color[vertice]){
					return false;
				}
			}
		}
	}
	return true;
}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("../input.txt","r",stdin); 
       freopen("../output.txt","w",stdout);
    #endif
    
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    
    cin>>v>>e; 

    vector<vector<int>> arr(v);
    int v1,v2;

    for(int i=0;i<e;i++){
    	cin>>v1>>v2;

    	arr[v1].push_back(v2);
    }

    if(isBipartite(arr,0)){
    	cout<<"Yes\n";
    }else{
    	cout<<"No\n";
    }

}
