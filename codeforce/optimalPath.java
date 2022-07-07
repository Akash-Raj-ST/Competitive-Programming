import java.util.*;

public class optimalPath{
    public static void minimumDist(int x,int y) {
        long sum = 0;
        int i,j;

        for(j=0;j<y;j++){
            i = 0;
            sum += (i)*y+(j+1);
        }

        for(i=1;i<x;i++){
            j = y-1;
            sum += (i)*y+(j+1);
        }
        System.out.println(sum);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        for(int i=0;i<n;i++){
            int x = sc.nextInt();
            int y = sc.nextInt();
            minimumDist(x,y);
        }
        sc.close();
    }
}