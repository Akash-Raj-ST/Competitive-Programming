//https://www.codechef.com/submit/ALTER

import java.util.*;
public class ALTER{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while(t-->0){
            int a = sc.nextInt();
            int b = sc.nextInt();
            int p = sc.nextInt();
            int q = sc.nextInt();

            if(p%a==0 && q%b==0){
                int diff = Math.abs((p/a)-(q/b));

                if(diff<2) System.out.println("YES");
                else System.out.println("NO");
            }else System.out.println("NO");
        }
        sc.close();
    }
}
