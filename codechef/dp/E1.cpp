#include <iostream>
#include <vector>
using namespace std;

int max(int a, int b){
    return a>b?a:b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        char *arr = new char[n*n];
        int *dp = new int[n*n];
        bool *pushed = new bool[n*n];

        char ch;
        
        int knight[2];

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>ch;
                if(ch=='P'){ 
                    *(arr+i*n+j)= 'P';
                }
                else if(ch=='.'){ 
                    *(arr+i*n+j)= '.';
                }
                else{
                    knight[0] = i;
                    knight[1] = j;
                }
                *(dp+i*n+j)=0;
                *(pushed+i*n+j)=false;
            }
        }

        int max_value=0;
        int moves[4][2] = {{1,2},{2,1},{1,-2},{2,-1}};
        int x,y;
        
        vector<pair<int,int>> st;
        st.push_back({knight[0],knight[1]});
        int i,j;
        while(!st.empty()){
            i = st.back().first;
            j = st.back().second;
            st.pop_back();
            for(int k=0;k<4;k++){
                x = i+moves[k][0];
                y = j+moves[k][1];

                if(x<n && y<n){
                    if(!*(pushed+x*n+y)) {
                        st.push_back({x,y});
                        *(pushed+x*n+y) = true;
                    }
                    
                    if(*(arr+x*n+y)=='P'){
                        *(dp+x*n+y) = max(*(dp+i*n+j)+1,*(dp+x*n+y));
                        if(*(dp+x*n+y)>max_value) max_value=*(dp+x*n+y);
                    }
                }       
            }
        }

        cout<<max_value<<"\n";
    }
}