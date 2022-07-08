//https://www.codechef.com/submit/KPRIME

import java.util.Scanner;

public class KPRIME {
    public static int ans[][];

    public static void precompute() {
        int limit = 100000;

        int factors[] = new int[limit+1];
        for(int i=2;i<=limit;i++){
            if(factors[i]==0){
                factors[i]=1;
                for(int j=i+i;j<=limit;j+=i){
                    factors[j] += 1;
                }
            }
        }

        int arr[ ][] = new int[6][limit+1];
        for(int i=2;i<=limit;i++){
            if(factors[i]<=5){
                arr[factors[i]][i] = 1;
            }
        }

        ans = new int[6][limit+1];

        for(int k=1;k<6;k++){
            for(int i=2;i<=limit;i++){
                ans[k][i] = arr[k][i]+ans[k][i-1];
            }
        }

        // for(int i=2;i<50;i++) System.out.print(factors[i]+" ");
        // System.out.println("----");

        // for(int i=1;i<6;i++){
        //     for(int j=2;j<50;j++){
        //         System.out.print(ans[i][j]+" ");
        //     }
        //     System.out.println();
        // }

    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        precompute();

        while(t-->0){
            int start = sc.nextInt();
            int end = sc.nextInt();
            int k = sc.nextInt();

            System.out.println(ans[k][end] - ans[k][start-1]);
        }
        sc.close();
    }
}
