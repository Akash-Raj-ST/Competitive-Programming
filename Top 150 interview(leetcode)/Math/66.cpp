class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        if(digits[n-1]<9){
            digits[n-1]+=1;
            return digits;
        }

        int rem = 0;
        int tot,num;
        for(int i=n-1;i>=0;i--){
            if(i==n-1)
                tot = digits[i]+1+rem;
            else
                tot = digits[i]+rem;
                
            num = tot%10;
            rem = tot/10;

            digits[i] = num;
        }

        if(rem) digits.insert(digits.begin(),1);
        return digits;
    }
};