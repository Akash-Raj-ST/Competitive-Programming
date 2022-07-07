import java.util.*;

public class ThreeNumberProblem {
    public static int xor(int a,int b,int c) {
        return (a^b)+(b^c)+(a^c);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int test_cases = sc.nextInt();

        for(int t=0;t<test_cases;t++){
            int n = sc.nextInt();

            boolean found = false;

            int high1=n,high2=n,high3=n;
            int low1=0,low2=0,low3=0;
            int mid1=0,mid2=0,mid3=0;
            int value=0;
            while(low1<high1){
                mid1 = (high1+low1)/2;
                high2 = n;
                low2 = 0;
                while(low2<high2){
                    mid2 = (high2+low2)/2;
                    high3 = n;
                    low3 = 0;
                    while(low3<high3){
                        mid3 = (high3+low3)/2;
                        System.out.println(mid1+" "+mid2+" "+mid3);    
                        value = xor(mid2,mid2,mid3);
                        if(value==n){
                            found=true;
                            break;
                        }

                        if(value>n) high3=mid3-1;
                        else low3=mid3+1;
                    }
                    if(value==n){
                        found=true;
                        break;
                    }
                    if(value>n) high2=mid2-1;
                    else low2=mid2+1;
                }
                if(value==n){
                    found=true;
                    break;
                }
                if(value>n) high1=mid1-1;
                else low1=mid1+1;
                System.out.println(mid1+" "+mid2+" "+mid3);
            }

            if(found) System.out.println(mid1+" "+mid2+" "+mid3);
            else System.out.println(-1);
        }
        sc.close();
    }
}
