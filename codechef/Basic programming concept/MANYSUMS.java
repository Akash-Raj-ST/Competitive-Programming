// https://www.codechef.com/submit/MANYSUMS

import java.util.Scanner;

public class MANYSUMS {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);

        int t = sc.nextInt();

        while(t-->0){
            int start = sc.nextInt();
            int end = sc.nextInt();

            if(start==end)  System.out.println(1);
            else    System.out.println((end+end)-(start+start)+1);
        }
    }
}
