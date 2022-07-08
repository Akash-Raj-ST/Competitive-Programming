//https://www.codechef.com/submit/SUDBOOKS

import java.util.*;

public class SUDBOOKS {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        Stack<Integer> s = new Stack<>();

        while(t-->0){
            int type = sc.nextInt();
            if(type==1) s.push(sc.nextInt());
            else{
                if(s.size()>0) System.out.println(s.pop());
                else System.out.println("kuchbhi?");
            }
        }
        sc.close();
    }
}
