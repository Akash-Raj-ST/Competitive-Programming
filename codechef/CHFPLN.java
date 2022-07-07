import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class CHFPLN {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-->0){
            int n = sc.nextInt();
            Map<Integer,Integer> mp = new HashMap<>();

            int num;
            for(int i=0;i<n;i++){
                num = sc.nextInt();
                if(mp.containsKey(num)){
                    mp.put(num,mp.get(num)+1);
                }else{
                    mp.put(num, 1);
                }
            }
             
            int count=0;
            for(int k: mp.keySet()){
                if(mp.get(k)>=k-1) count += k-1;
                else count += mp.get(k);
            }

            System.out.println(count);
        }
        
        sc.close();
    }
}
