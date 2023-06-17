class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long ori = x;
        long long temp = 0;

        while(x>0){
            int last = x%10;
            temp = temp*10+last;
            x /= 10;
        }

        if(temp==ori) return true;
        return false;
    }
};