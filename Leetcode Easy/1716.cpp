class Solution {
public:
    int totalMoney(int n) {
        int q = n/7;
        int r = n%7;

        int total = 0,count=0;

        for(int i=0;i<q;i++){
            total += 28 + count;
            count += 7;
        }

        for(int i=0;i<r;i++){
            total += q+1;
            q++;
        }
        return total;
    }
};