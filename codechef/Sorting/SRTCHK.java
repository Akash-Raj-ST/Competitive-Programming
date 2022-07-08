//https://www.codechef.com/submit/SRTCHK

import java.util.Scanner;

public class SRTCHK {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);

        int t = sc.nextInt();

        while(t-->0){
            int n = sc.nextInt();

            int[] a = new int[n];
            int[] b = new int[n];

            for(int i=0;i<n;i++) a[i] = sc.nextInt();
            for(int i=0;i<n;i++) b[i] = sc.nextInt();

            Arrays.sort(a);
            if(Arrays.equals(a,b)) System.out.println("yes");
            else System.out.println("no");

        }
    }
}
