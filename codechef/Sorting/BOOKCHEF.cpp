#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Post{
    int f;
    int p;
    string content;

    Post(int a,int b,string c){
        f = a;
        p = b;
        content = c;
    }
};

bool compare(Post a,Post b){
    return a.p>b.p;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    int n,m,num;
    cin>>n>>m;

    vector<int> friends;

    for(int i=0;i<n;i++){ 
        cin>>num;
        friends.push_back(num);
    }

    vector<Post> posts;
    int f,p;
    string s;
    for(int i=0;i<m;i++){
        cin>>f>>p>>s;

        Post p1(f,p,s);
        posts.push_back(p1);
    }

    vector<Post> vec1;
    vector<Post> vec2;

    bool found;
    for(Post item: posts){

        found = false;

        for(int i=0;i<n;i++){
            if(item.f==friends.at(i)){
                vec1.push_back(item);
                found=true;
                break;
            }
        }

        if(!found) vec2.push_back(item);
    }

    sort(vec1.begin(),vec1.end(),compare);
    sort(vec2.begin(),vec2.end(),compare);

    for(Post p1: vec1){
        cout<<p1.content<<"\n";
    }

    for(Post p2: vec2){
        cout<<p2.content<<"\n";
    }

}