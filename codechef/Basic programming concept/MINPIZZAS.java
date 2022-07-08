//https://www.codechef.com/submit/MINPIZZAS

import java.util.Scanner;
import java.math.*;

public class MINPIZZAS{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while(t-->0){
            String n = sc.next();
            String slice = sc.next();

            BigInteger a = new BigInteger(n);
            BigInteger b = new BigInteger(slice);
            BigInteger c = a.gcd(b);
            System.out.println(a.divide(c));
            
        }
        sc.close();
    }
}
