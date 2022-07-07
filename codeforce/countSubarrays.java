import java.util.Scanner;

public class countSubarrays {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        for(int i=0;i<n;i++){
            int len  = sc.nextInt();
            long dp[] = new long[len];

            long prev = sc.nextInt();
        
            dp[0] = 1;
            for(int j=1;j<len;j++){
                long num = sc.nextInt();
                if(num>=prev) dp[j] = dp[j-1]+1;
                else dp[j] = 1;
                prev = num;
            }

            long sum = 0;
            for(int j=0;j<len;j++) sum += dp[j];
            
            System.out.println(sum);
        }
        sc.close();
    }
}
