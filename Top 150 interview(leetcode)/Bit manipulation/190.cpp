class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;

        int dig,pos=31;
        while(n>0){
            dig = n&1;
            n = n>>1;

            if(dig) ans += pow(2,pos);
            pos--;
        }
        return ans;
    }
};