#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long int
using namespace std;


const ll M=1e9+7;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    vector<int> arr = {1,3,5,7,8};

    vector<int>::iterator pos;
    int index;

    pos = lower_bound(arr.begin(),arr.end(),7);
    index = pos - arr.begin();
    cout<<"POS "<<index<<"value: "<<arr[index]<<'\n';
}