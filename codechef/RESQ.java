import java.util.*;

public class RESQ{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-->0){
            int n = sc.nextInt();

            int ans = n-1,value;
            for(int i=(int)Math.sqrt(n);i>0;i--){
                if(n%i==0){
                    value = (n/i)-i; 

                    if(value==0){
                        ans=0;
                        break;
                    }

                    if(value<ans) ans=value;
                }
            }
            System.out.println(ans);
        }
        sc.close();
    }
}