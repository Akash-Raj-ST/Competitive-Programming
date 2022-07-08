import java.util.Scanner;

public class ENGXOR {
    public static boolean is_even(int n) {
        int count = 0;
        
        while(n>0){
            if((n&1)==1) count++;
            n = n>>1;
        }

        if((count&1)==1) return false;
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while(t-->0){
            int n = sc.nextInt();
            int q = sc.nextInt();

            int arr[] = new int[n];
            for(int i=0;i<n;i++) arr[i] = sc.nextInt();

            int value,even_count,odd_count,query;
            while(q-->0){
                even_count=0;
                odd_count=0;

                query = sc.nextInt();

                for(int i=0;i<n;i++){
                    value = arr[i]^query;

                    if(is_even(value))  even_count++;
                    else odd_count++;
                }

                System.out.println(even_count+" "+odd_count);
            }
        }
    }
}
