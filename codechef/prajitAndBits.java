import java.util.Scanner;

public class prajitAndBits {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while(t-->0){
            int n = sc.nextInt();
            int count = 0;
            while(n>0){
                if(n%2==0) count++;
                n = n/2;
            }
            System.out.println(count);
        }
    }
}