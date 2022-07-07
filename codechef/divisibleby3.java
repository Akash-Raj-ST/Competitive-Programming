import java.util.Scanner;

public class divisibleby3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-->0){
            int n = sc.nextInt();
            
            if(n==1) System.out.println(3);
            else{
                for(int i=0;i<n;i++){
                    if(i==0) System.out.print(1);
                    else if(i==n-1) System.out.print(5);
                    else System.out.print(0);
                }
                System.out.println();
            }
        }
        sc.close();
    }
}
