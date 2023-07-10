class Solution {
public:

    static int value(int n){
        int num = 0;
        while(n>0){
            int digit = n%10;
            num += digit*digit;
            n /= 10;
        }
        return num;
    }
    bool isHappy(int n) {
        map<int,bool> mp;
        mp[n]  = true;

        int num = n;
        while(true){
            num = value(num);
            cout<<num<<' ';
            if(num==1) return true;
            if(mp[num]) return false;
            mp[num] = true;
        }
    }
};