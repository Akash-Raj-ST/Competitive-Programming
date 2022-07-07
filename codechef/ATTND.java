import java.util.Scanner;

public class ATTND {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while(t-->0){
            int n = sc.nextInt();
            String first[] = new String[n];
            String second[] = new String[n];

            for(int i=0;i<n;i++){
                first[i] = sc.next();
                second[i] = sc.next();
            }

            boolean arr[] = new boolean[n];
            boolean found;

            for(int i=0;i<n;i++){

                if(arr[i]==false){

                    found = false;

                    for(int j=i+1;j<n;j++){
                        if(first[i].equals(first[j])){
                            arr[j]=true;
                            found = true;
                        }
                    }
                    if(found) System.out.println(first[i]+" "+second[i]);
                    else System.out.println(first[i]);

                }else{
                    System.out.println(first[i]+" "+second[i]);
                }
            }

        }
    }
}
