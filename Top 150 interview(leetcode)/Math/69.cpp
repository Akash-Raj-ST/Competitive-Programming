class Solution {
public:
    int mySqrt(int x) {
        if(x==1) return 1;

        int ans = 0;
        for(long i=0;i<=x/2;i++){
            if(i*i==x){
                ans = i;
                break;
            }else if(i*i<x){
                ans = i;
            }else{
                break;
            }
        }
        return ans;
    }
};