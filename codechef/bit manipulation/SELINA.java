//https://www.codechef.com/submit/SELINA

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class SELINA {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while(t-->0){
            String s = sc.next();

            Map<Character,Integer> mp = new HashMap<>();

            for(int i=0;i<s.length();i++){
                if(mp.containsKey(s.charAt(i))){
                    mp.put(s.charAt(i), mp.get(s.charAt(i))+1);
                }else{
                    mp.put(s.charAt(i), 1);
                }
            }
            
            boolean found = false;
            for(Character ch: mp.keySet()){
                if(mp.get(ch)%2==1){
                    System.out.println(ch);
                    found = true;
                    break;
                }
            }

            if(!found) System.out.println(-1);
        }
    }
}
