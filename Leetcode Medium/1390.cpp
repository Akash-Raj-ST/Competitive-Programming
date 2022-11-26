#define MAX 10e5+1
#define ll long long int

int sum(vector<int> v){
        int sum = 0;
        for(auto it:v){
            sum += it;
        }
        return sum;
 }

class Solution {
public:
    

    int sumFourDivisors(vector<int>& nums) {

        int count;
        bool flag;
        int total = 0;

        for(auto it:nums){
            vector<int> v;
            count = 2;
            flag = false;

            v.push_back(1);
            v.push_back(it);
            for(int i=2;i<=it/2;i++){

                if(it%i==0){
                    if(count==4){
                        flag = true;
                        break;
                    }

                    count++;
                    v.push_back(i);
                }
            }
    
            if(!(flag || count<4)) total += sum(v);
        }

        return total;
    }
};