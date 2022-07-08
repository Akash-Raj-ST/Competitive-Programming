// https://www.codechef.com/submit/SMPAIR

import java.util.Scanner;

public class SMPAIR {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int arr[] = new int[n];

            for(int i=0;i<n;i++)    arr[i] = sc.nextInt();
            
            int s1=arr[0],index1=0;
            for(int i=1;i<n;i++){
                if(arr[i]<s1){
                    s1 = arr[i];
                    index1 = i;
                }
            }

            int s2;
            if(index1!=0) s2=arr[0];
            else s2=arr[1];

            for(int i=index1!=0?1:2;i<n;i++){
                if(i==index1) continue;

                if(arr[i]<s2){
                    s2 = arr[i];
                }
            }
            System.out.println(s1+s2);
        }
    }
}
