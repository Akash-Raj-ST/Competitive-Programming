#include <iostream>
using namespace std;

int main(){
    // std::ios_base::sync_with_stdio(false);
    // std::cin.tie(0); 
    // std::cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n,m;
        scanf("%d",&n);
        scanf("%d",&m);


        int *A = new int(n);
        int *B = new int(n);

        for(int i=0;i<n;i++) scanf("%d",&A[i]);
        for(int i=0;i<m;i++) scanf("%d",&B[i]);

        int p1,p2;
        bool found_p1,found_p2;
        for(int i=0;i<m;i++){
           
            if(A[B[i]-1]!=0) printf("0 ");
            else{
                p1=B[i]-1;
                p2=B[i];
                found_p1=false;
                found_p2=false;
    
                while(p1>=0 || p2<n){
                    //printf("p1: %d, p2: %d\n",p1,p2);
                    if(p1>=0){
                        if(A[p1]==1){
                            found_p1=true;
                            break;
                        }
                        p1--;
                    }
                    if(p2<n){
                        if(A[p2]==2){
                            found_p2=true;
                            break;
                        }
                        p2++;
                    }
                }
                if(found_p1) printf("%d ",B[i]-1-p1);
                else if(found_p2) printf("%d ",p2-(B[i]-1));
                else printf("-1 ");
            }
        }
        printf("\n");
    }
}