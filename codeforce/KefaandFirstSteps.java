import java.util.Scanner;

public class KefaandFirstSteps {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int max = 1;

        int prev = sc.nextInt();
        int count = 1;

        for(int i=1;i<n;i++){
            int num = sc.nextInt();
            if(num>=prev){
                count++;
                if(count>max) max = count;
            }else{
                count=1;
            }
            prev = num;
        }
        System.out.println(max);
    }
}
