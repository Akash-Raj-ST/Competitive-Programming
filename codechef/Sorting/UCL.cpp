#include <iostream>
#include <map>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int t;
    cin>>t;

    while(t--){

        map<string,pair<int,int>> mp;

        string home,away,dummy;
        int h_goal,a_goal;

        for(int i=0;i<12;i++){
            cin>>home>>h_goal>>dummy>>a_goal>>away;

            if(h_goal>a_goal){
                mp[home].first += 3;
            }else if(a_goal>h_goal){
                mp[away].first += 3;
            }else{
                mp[home].first += 1;
                mp[away].first += 1;
            }

            mp[home].second += h_goal-a_goal;
            mp[away].second += a_goal-h_goal;

        }

        string first,second;
        int score_f=-1,score_s=-1;
        int diff_f=-1,diff_s=-1;

        for(auto item:mp){
            if(item.second.first>score_f || (item.second.first==score_f && item.second.second>diff_f)){

                score_s = score_f;
                diff_s = diff_s;
                second = first;

                score_f = item.second.first;
                diff_f = item.second.second;
                first  = item.first;
            }
            else if(item.second.first>score_s || (item.second.first==score_s && item.second.second>diff_s)){
                score_s = item.second.first;
                diff_s = item.second.second;
                second  = item.first;
            }
        }
        cout<<first<<" "<<second<<"\n";
    }
}