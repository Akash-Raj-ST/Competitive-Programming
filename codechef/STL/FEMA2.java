//https://www.codechef.com/submit/FEMA2
//see the c++ solution has the exact same algo but java causes TLE ik WTF!

import java.util.HashMap;
import java.util.LinkedList;
import java.util.Map;
import java.util.Queue;
import java.util.Scanner;
import java.util.TreeSet;

import javax.management.Query;

public class FEMA2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int k = sc.nextInt();   
            String s = sc.next();
            
            Queue<Integer> iron = new LinkedList<>();
            Queue<Integer> mag = new LinkedList<>();

            String l = "";

            for(int i=0;i<n;i++){
                if(s.charAt(i)==':') l+=':';
                l+=s.charAt(i);
            }

            int count=0;
            for(int i=0;i<l.length();i++){
                if(l.charAt(i)=='I'){
                    while(!mag.isEmpty() && k+1-(i-mag.peek())<=0) mag.remove();
                    if(!mag.isEmpty()){
                        count++;
                        mag.remove();
                    }else{
                        iron.add(i);
                    }
                }else if(l.charAt(i)=='M'){
                    while(!iron.isEmpty() && k+1-(i-iron.peek())<=0) iron.remove();
                    if(!iron.isEmpty()){
                        count++;
                        iron.remove();
                    }else{
                        mag.add(i);
                    }
                }else if(l.charAt(i)=='X'){
                    iron.clear();
                    mag.clear();
                }
            }
            System.out.println(count);

        }
    }
}
