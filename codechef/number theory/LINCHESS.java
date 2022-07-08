https://www.codechef.com/submit/LINCHESS

import java.util.Scanner;

public class LINCHESS {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while(t-->0){
            int n = sc.nextInt();
            int curr_pos = sc.nextInt();
            int arr[] = new int[n];

            for(int i=0;i<n;i++) arr[i] = sc.nextInt();

            int min=curr_pos,pos=-1;
            for(int i=0;i<n;i++){
                if(curr_pos%arr[i]==0){ 
                    if(curr_pos/arr[i]<min){ 
                        min = curr_pos/arr[i];
                        pos = arr[i];
                    };
                }
            }
            System.out.println(pos);
        }
    }
}
