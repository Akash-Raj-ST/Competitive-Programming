//https://www.codechef.com/submit/AVGFLEX

import java.util.Scanner;

public class AVGFlex {
    public static void main(String[] args) {
        Scanner sc  = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-->0){
            int n = sc.nextInt();
            int arr[] = new int[n];

            for(int i=0;i<n;i++){
                arr[i] = sc.nextInt();
            }

            int count=0,low,high;
            for(int i=0;i<n;i++){
                low = 0;
                high=0;
                for(int j=0;j<n;j++){
                    if(i==j) continue;
                    
                    if(arr[j]>arr[i]) high++;
                    else low++;

                }
                if(low>=high) count++;
            }
            System.out.println(count);
        }
    }
}
