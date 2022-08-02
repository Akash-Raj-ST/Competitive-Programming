#include <iostream>
using namespace std;

string DecimalToBinary(long long int num)
{
    string str;
      while(num){
      if(num & 1) // 1
        str+='1';
      else // 0
        str+='0';
      num>>=1; // Right Shift by 1 
    }  
    return str;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

    long long int t;
    cin>>t;

    while(t--){
        long long int a,b;
        cin>>a>>b;
        string num1 = DecimalToBinary(a);
        string num2 = DecimalToBinary(b);


        long long int i = num1.size()-1;
        long long int j = num2.size()-1;
        long long int k = 0;

        while(i>=0 && j>=0){
          if(num1[i]!=num2[j]) break;
          k++;
          i--;
          j--;
        }

        long long int ans = num1.size()-k + num2.size()-k;
        cout<<ans<<"\n";
    }
}