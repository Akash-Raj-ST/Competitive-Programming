class Solution {
public:
    int trailingZeroes(int n) {
        int ans = 0;
        long long mul = 5;

        while(n>=mul){
            ans += n/mul;
            mul *= 5;
        }
        return ans;
    }
};