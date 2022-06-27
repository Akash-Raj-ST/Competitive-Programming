// 2288. Apply Discount to Prices
// https://leetcode.com/problems/apply-discount-to-prices/

class Solution {
    public static boolean isNumeric(String str) { 
        
      try {  
        Double.parseDouble(str);  
        for(int i=0;i<str.length();i++){
            if(str.charAt(i)>='a' && str.charAt(i)<='z')return false;
        }
        return true;
      } catch(NumberFormatException e){  
        return false;  
      }  
    }
    
    public String discountPrices(String sentence, int discount) {
        String[] arr = sentence.split(" ");
        for(int i=0;i<arr.length;i++){
            String s = arr[i];
            if(s.charAt(0)=='$' && isNumeric(s.substring(1,s.length()))){
                double num = Double.parseDouble(s.substring(1,s.length()));
                double dis_amt = num/100*discount;
                num -= dis_amt;
                arr[i] = "$"+String.format("%.2f", num);
            }
        }
        return String.join(" ",arr);
    }
}