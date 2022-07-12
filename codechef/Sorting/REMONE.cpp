#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int valid_min(int a,int b){
    if(a<0) return b;
    if(b<0) return a;
    return a>b?b:a;
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

        vector<int> a;
        vector<int> b;
        int num;

        for(int i=0;i<n;i++){
            cin>>num;
            a.push_back(num);
        }

        for(int i=0;i<n-1;i++){
            cin>>num;
            b.push_back(num);
        }

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        int pos_1,pos_2;

        pos_1 = b.at(0)-a.at(0);
        pos_2 = b.at(0)-a.at(1);


        if(n==2){
            cout<<valid_min(pos_1,pos_2)<<"\n";
            continue;
        }

        int fault,b_pt;
        bool pos_1_value=false,pos_2_value=false;

        if(pos_1>0){
            pos_1_value=true;
            fault=0;
            b_pt=0;
            for(int i=0;i<n && b_pt<n-1;i++){
                if(a.at(i)+pos_1==b.at(b_pt)){
                    b_pt++;
                }else{
                    fault++;
                }

                if(fault==2){
                    pos_1_value = false;
                    break;
                }
            }
        }

        if(pos_2>0){
            pos_2_value=true;
            fault=0;
            b_pt=0;
            for(int i=0;i<n && b_pt<n-1;i++){
                if(a.at(i)+pos_2==b.at(b_pt)){
                    b_pt++;
                }else{
                    fault++;
                }

                if(fault==2){
                    pos_2_value = false;
                    break;
                }
            }
        }

        if(pos_1_value && pos_2_value) cout<<min(pos_1,pos_2)<<"\n";
        else if(pos_1_value) cout<<pos_1<<"\n";
        else if(pos_2_value) cout<<pos_2<<"\n";
        else cout<<pos_2<<"\n";
       
    }
}