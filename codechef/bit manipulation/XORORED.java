//https://www.codechef.com/submit/XORORED
import java.util.Scanner;

public class XORORED {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while(t-->0){
            int n = sc.nextInt();

            int arr[] = new int[n];
            int and = -1;
            for(int i=0;i<n;i++) {
                arr[i] = sc.nextInt();
                and = and&arr[i];
            };

            int sum = 0;
            for(int i=0;i<n;i++){
                sum = sum |( arr[i]^and);
            }

            System.out.println(and+" "+sum);
        }
    }
}
