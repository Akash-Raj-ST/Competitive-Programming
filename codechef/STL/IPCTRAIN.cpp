#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>

using namespace std;

struct trainer{
    int day;
    int lecture;
    int sad;
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        int n,lectures;
        cin>>n>>lectures;

        vector<trainer> trainers(n);
        set<int> days;
        int total_sad = 0;


        for(int i=0;i<n;i++){
            cin>>trainers[i].day>>trainers[i].lecture>>trainers[i].sad;
            days.insert(trainers[i].day);
            total_sad += trainers[i].day*trainers[i].sad;
        }
        cout<<"total sad "<<total_sad<<"\n";
        int days_count=0;
        int curr_day = *next(days.begin(),0);

        
        int index,max_sad;
        bool found;
        int total = 0;
        while(lectures!=0){

            index=-1;
            max_sad = -1;
            found = false;


            for(int i=0;i<n;i++){
                cout<<"curr_day: "<<curr_day<<"\n";
                cout<<"day: "<<trainers[i].day<<"\n";
                if(trainers[i].lecture!=0 && trainers[i].day<= curr_day){
                    cout<<"sad: "<<trainers[i].sad<<"\n";
                    if(trainers[i].sad>max_sad){
                        index=i;
                        found = true;
                        max_sad = trainers[i].sad;
                    }
                }
            }
            if(days_count+1<days.size()) curr_day = *next(days.begin(),++days_count);

            lectures--;
            if(found){
                total += max_sad;
                trainers[index].lecture -= 1;
            }
            cout<<"max_sad"<<max_sad<<"\n";
        }
        cout<<"\n";
        cout<<"sad "<<total<<"\n";
        cout<<total_sad-total<<"\n";
    }
}