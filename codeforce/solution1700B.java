import java.util.*;

public class solution1700B{

    public static void palin(int n,int num) {
      
        StringBuilder palin_num = new StringBuilder(String.valueOf(num+(int)Math.pow(10, n-1)));

        int p1=0,p2=palin_num.length()-1;
        while(p1<p2){
            if(Character.getNumericValue(palin_num.charAt(p1))>Character.getNumericValue(palin_num.charAt(p2))){
                palin_num.setCharAt(p2, palin_num.charAt(p1));
            }else{
                if(p1==0){
                    palin_num.setCharAt(p2, palin_num.charAt(p1));
                    String temp = palin_num.toString();
                    char c =(char) ((Character.getNumericValue(temp.charAt(p2-1))+1)+'0');

                    palin_num.setCharAt(p2-1, c);
                }
                else palin_num.setCharAt(p1, palin_num.charAt(p2));
            }
            p1++;
            p2--;
        }

        int value = Integer.parseInt(palin_num.toString());
        System.out.println(value-num);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        for(int i=0;i<n;i++){
            int num_length = sc.nextInt();
            int num = sc.nextInt();
            palin(num_length,num);
        }
        sc.close();
    }
}
