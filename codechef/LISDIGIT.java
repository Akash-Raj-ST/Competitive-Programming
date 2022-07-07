import java.util.Scanner;

public class LISDIGIT {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-->0){
            int n = sc.nextInt();
            int arr[] = new int[n];

            for(int i=0;i<n;i++) arr[i]=sc.nextInt();

            int ans = 1;
            
            for(int i=1;i<n;i++) ans = ans*10+arr[i];

            System.out.println(ans);
        }
    }
}
