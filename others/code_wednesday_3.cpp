#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>

#define ll long long int
using namespace std;


const ll M=1e9+7;

int dim_size(int f_r,int l_r,int f_c,int l_c){
    return (l_r-f_r)*(l_c-f_c);
}

int arr_sum(vector<vector<int>> arr,int f_r,int l_r,int f_c,int l_c){
  
  int sum = 0;
    for(int i=f_r;i<l_r;i++){
        for (int j = f_c; j < l_c; j++){
            sum += arr[i][j];
        }
    }

    return sum;
}

ll calc_hash(vector<int> v){
  ll hash = (v[0]*1000)+(v[1]*100)+(v[2]*10)+(v[3]*1);
  return hash;
}


int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
      int n,m;
      cin>>n>>m;

      vector<vector<int>> arr(n+1,vector<int>(m+1));

      int sum = 0;
      for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
              cin>>arr[i][j];
          }
      }


      vector<string> options = {"f_r","l_r","f_c","l_c"};

      queue<vector<int>> q;
      q.push({0,n,0,m});

      int max = 0;

      map<ll,bool> mp;
      ll hash;

      while(!q.empty()){
        vector<int> v = q.front();
        q.pop();

        int f_r = v[0];
        int l_r = v[1];
        int f_c = v[2];
        int l_c = v[3];

        // cout<<f_r<<' '<<l_r<<' '<<f_c<<' '<<l_c<<'\n';

        sum = arr_sum(arr,f_r,l_r,f_c,l_c);

        if(sum==0){
            int curr_size = dim_size(f_r,l_r,f_c,l_c);
            if(curr_size>max){
                max = curr_size;
            }
        }

        for(int i=0;i<4;i++){
            vector<int> v1 = v;
            if(options[i]=="f_r"){
                if(f_r+1<n && (f_r+1<l_r)){
                    v1 = v;
                    v1[0]++;

                    hash = calc_hash(v1);
              
                    if(!mp[hash])
                           q.push(v1);

                    mp[hash] = true;

                }
            }else
                
            if(options[i]=="f_c"){
                if(f_c+1<m && (f_c+1<l_c)){
                    v1 = v;
                    v1[2]++;
                    hash = calc_hash(v1);
              
                    if(!mp[hash])
                        q.push(v1);
                        mp[hash] = true;
                }
            }else
                
            if(options[i]=="l_r"){
                if(l_r-1>0 && (l_r-1>f_r)){
                    v1 = v;
                    v1[1]--;
                    hash = calc_hash(v1);
              
                    if(!mp[hash])
                        q.push(v1);
                    
                    mp[hash] = true;
                }
            }else{
                if(l_c-1>0 && (l_c-1>f_c)){
                    v1 = v;
                    v1[3]--;
                    hash = calc_hash(v1);
              
                    if(!mp[hash])
                        q.push(v1);
                    
                    mp[hash] = true;
                }
            }
        }

      }


      cout<<max<<'\n';

    }
}
