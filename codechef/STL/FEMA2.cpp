//https://www.codechef.com/submit/FEMA2

#include <iostream>
#include <queue>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        string s;
        cin>>n>>k>>s;

        queue<int> iron;
        queue<int> mag;

        string l = "";
        for(int i=0;i<n;i++){
            if(s[i]==':') l+=':';
            l+=s[i];
        }

        int count = 0;
        for(int i=0;i<l.length();i++){
            if(l[i]=='I'){
                while(!mag.empty() && k+1-(i-mag.front())<=0) mag.pop();

                if(!mag.empty()){
                    count++;
                    mag.pop();
                }else{
                    iron.push(i);
                }
            }else if(l[i]=='M'){
                while(!iron.empty() && k+1-(i-iron.front())<=0) iron.pop();

                if(!iron.empty()){
                    count++;
                    iron.pop();
                }else{
                    mag.push(i);
                }

            }else if(l[i]=='X'){
                while(!mag.empty()) mag.pop();
                while(!iron.empty()) iron.pop();
            }
        }
        cout<<count<<endl;
    }
}