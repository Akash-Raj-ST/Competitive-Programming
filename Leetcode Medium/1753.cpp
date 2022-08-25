class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int temp;
        if(a>b){
            temp = a;
            a = b;
            b = temp;
        }

        if(b>c){
            temp = b;
            b = c;
            c = temp;
        }

        if(a>b){
            temp = a;
            a = b;
            b = temp;
        }

        int diff = c-b;

        if(a>=diff){
            b += diff;
            a -= diff;

            if(a>=2){
                return c+(a/2);
            }else{
                return c;
            }
        }else{
            return a+b;
        }
    }
};