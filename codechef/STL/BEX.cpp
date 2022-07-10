#include <iostream>
#include <vector>
using namespace std;

struct Book{
    string book;
    int exercise;

    Book(string name,int exe){
        book = name;
        exercise = exe;
    }
};  

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);  

    int t;
    cin>>t;

    vector<pair<Book,int>> st;

    while(t--){
        int ch;
        cin>>ch;

        if(ch==-1){
                cout<<st.back().second<<" "<<st.back().first.book<<endl;
                st.pop_back();
        }else{
            string book;
            cin>>book;
            if(ch==0) continue;

            if(st.empty() || st.back().first.exercise>=ch){
                Book b(book,ch);
                st.push_back({b,0});
            }else{
                st.back().second += 1;
            }
        }
    }
}