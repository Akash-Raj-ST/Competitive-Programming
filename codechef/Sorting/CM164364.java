//https://www.codechef.com/submit/CM164364

import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class CM164364 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-->0){
            int n = sc.nextInt();
            int b = sc.nextInt();

            Set<Integer> st = new HashSet<>();

            for(int i=0;i<n;i++){
                st.add(sc.nextInt());
            }

            int saved = n-st.size();
            if(saved>=b) System.out.println(st.size());
            else {
                int req = b-saved;
                System.out.println(st.size()-req);
            }
        }
    }   
}
