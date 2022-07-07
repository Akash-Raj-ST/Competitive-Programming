import java.util.Scanner;

public class MinionChefandBananas{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int tc = sc.nextInt();

        for(int t=0;t<tc;t++){
            int n = sc.nextInt();
            int hours = sc.nextInt();

            int arr[] = new int[n];
            
            for(int i=0;i<n;i++){
                arr[i] = sc.nextInt();
            }

            int high=arr[0],low=arr[0],mid;

            for(int i=1;i<n;i++){
                if(arr[i]>high) high=arr[i];
                else if(arr[i]<low) low = arr[i];
            }

            int hr,ans=high;
            while(low<high){
                mid = (high+low)/2;
                hr = 0;
                for(int i=0;i<n;i++){
                    if(arr[i]%mid==0) hr += arr[i]/mid;
                    else hr += (arr[i]/mid)+1;
                }
                if(hr>hours){
                    low = mid+1;
                }else{
                    high = mid-1;
                    if(mid<ans) ans=mid;
                }
            }
            System.out.println(ans);
        }
        sc.close();
    }
}