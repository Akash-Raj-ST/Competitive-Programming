#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    string sc;
    cin>>sc;

    while(sc.length()==20){
        int team_a=0,team_b=0;
        int round = 0;
        bool sudd_death = true;

        for(int i=0;i<10;i+=2){

            if(sc[i]=='1') team_a++;
            round++;

            if(team_a>(team_b+((10-round)/2+1))){
                cout<<"TEAM-A "<<round<<"\n";
                sudd_death = false;
                break;
            }else if(team_b>(team_a+((10-round)/2))){
                cout<<"TEAM-B "<<round<<"\n";
                sudd_death = false;
                break;
            }

            if(sc[i+1]=='1') team_b++;
            round++;

            if(team_b>(team_a+((10-round)/2))){
                cout<<"TEAM-B "<<round<<"\n";
                sudd_death = false;
                break;
            }else if(team_a>(team_b+((10-round)/2))){
                cout<<"TEAM-A "<<round<<"\n";
                sudd_death = false;
                break;
            }

        }

        bool tie=true;
        if(sudd_death)
            for(int i=10;i<20;i+=2){
                round += 2;
                if(sc[i]=='1' && sc[i+1]=='0'){
                    cout<<"TEAM-A "<<round<<"\n";
                    tie=false;
                    break;
                }else if(sc[i]=='0' && sc[i+1]=='1'){
                    cout<<"TEAM-B "<<round<<"\n";
                    tie=false;
                    break;
                }
            }

        if(tie && sudd_death) cout<<"TIE"<<"\n";
        sc="";
        cin>>sc;
    }
}