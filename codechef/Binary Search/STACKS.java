//https://www.codechef.com/submit/STACKS

import java.util.Scanner;

public class STACKS {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while(t-->0){
            int n = sc.nextInt();

            int arr[] = new int[n];

            for(int i=0;i<n;i++) arr[i]=sc.nextInt();

            int stack[] = new int[n];
            int count=0;

            stack[count++] = arr[0];

            for(int i=1;i<n;i++){

                int low=0,high=count,mid;
                int index=-1;
                
                while(low<=high){
                    mid = (high+low)/2;
                    if(arr[i]<stack[mid]){
                        index = mid;
                        high=mid-1;
                    }else{
                        low = mid+1;
                    }
                }
                if(index==-1) stack[count++] = arr[i];
                else stack[index] = arr[i];
            }

            System.out.print(count+" ");
            for(int i=0;i<count;i++) System.out.print(stack[i]+" ");
            System.out.println();
        }
    }
}
