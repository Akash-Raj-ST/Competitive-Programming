class Solution {
public:
    string intToRoman(int num) {
        
        string res = "";
        int divisors[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string romans[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        for (int i = 0; i < 13; i++) {
            int amount = num / divisors[i];
            for (int j = 0; j < amount; j++) {
                res += romans[i];
            }
            num = num - amount * divisors[i];
        }
        return res;
    }
};

// class Solution {
// public:
//     string intToRoman(int num) {

//         string ans = "";

//         int v;
//         while(num>0){
//             if(num==4){
//                 ans += "IV";
//                 break;
//             }
//             if(num==9){
//                 ans += "IX";
//                 break;
//             }
           
//             if(num>=1000){
//                 v = num/1000;
//                 num = num%1000;

//                 while(v--){
//                     ans+="M";
//                 }
//             }

//             else if(num>=900){
//                 ans += "CM";
//                 num -= 900;
//             }

//             else if(num>=500){
//                 v = num/500;
//                 num = num%500;

//                 while(v--){
//                     ans+="D";
//                 }
//             }

//             else if(num>=400){
//                 ans += "CD";
//                 num -= 400;
//             }

//             else if(num>=100){
//                 v = num/100;
//                 num = num%100;

//                 while(v--){
//                     ans+="C";
//                 }
//             }

//             else if(num>=90){
//                 ans += "XC";
//                 num -= 90;   
//             }

//             else if(num>=50){
//                 v = num/50;
//                 num = num%50;

//                 while(v--){
//                     ans+="L";
//                 }
//             }

//             else if(num>=40){
//                 ans += "XL";
//                 num -= 40;
//             }

//             else if(num>=10){
//                 v = num/10;
//                 num = num%10;

//                 while(v--){
//                     ans+="X";
//                 }
//             }

//             else if(num>=5){
//                 ans += "V";
//                 num -= 5;
//             }

//             else{
//                 while(num--) ans += "I";
//             }
//         }
//         return ans;
//     }
// };