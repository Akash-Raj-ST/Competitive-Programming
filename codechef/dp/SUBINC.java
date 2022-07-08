//https://www.codechef.com/submit/SUBINC

import java.util.Scanner;

public class SUBINC {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while(t-->0){
            long n = sc.nextLong();
            long sum = 0;
            long prev = 0;
            long value=0,num;

            for(long i=0;i<n;i++){
                num = sc.nextLong();
              
                if(num>prev){
                    value++;
                    sum += value;
                }else{
                    value = 1;
                    sum++;
                }

                prev=num;
            }
            System.out.println(sum);
        }   

        sc.close();
    }
}
