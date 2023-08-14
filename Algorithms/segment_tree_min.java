import java.util.*;
import java.io.*;

public class segment_tree_min {
    // For fast input output
    static class FastReader {
        BufferedReader br;
        StringTokenizer st;

        public FastReader(){
            try {
                br = new BufferedReader(
                new FileReader("../input.txt"));
                PrintStream out = new PrintStream(new FileOutputStream("../output.txt"));
                System.setOut(out);
            }
            catch(Exception e) {
                br = new BufferedReader(new InputStreamReader(System.in));
            }
        }

        String next()
        {
            while (st == null || !st.hasMoreElements()) {
                try {st = new StringTokenizer(br.readLine());}
                catch (IOException e) {
                    e.printStackTrace();}
            }
            return st.nextToken();
        }

        int nextInt() { return Integer.parseInt(next()); }
        long nextLong() { return Long.parseLong(next()); }
        double nextDouble() {return Double.parseDouble(next()); }
        String nextLine()
        {
            String str = "";
            try {
            str = br.readLine();
            }
            catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }
    }
    // end of fast i/o code

    public static int[] tree;
    public static int[] initial_arr;

    public static void build(int[] arr){
        initial_arr = arr;
        int n = arr.length;
        int height = (int) Math.ceil(Math.log(n)/Math.log(2));

        int size = 2*(int)Math.pow(2, height)-1;

        tree = new int[size];
        for(int i=0;i<size;i++) tree[i] = Integer.MAX_VALUE;

        construct(0, n-1, 0);

    }

    private static int construct(int low,int high,int pos){
        if(high==low){
            tree[pos] = initial_arr[low];
            return tree[pos];
        }

        int mid = (high+low)/2;

        tree[pos] = Math.min(construct(low, mid, pos*2+1),construct(mid+1, high, pos*2+2));
        return tree[pos];
    }

    private static void update(int index,int val){
        update(0, initial_arr.length-1, index, val, 0);
    }

    private static void update(int low,int high,int index,int new_value,int pos){
        if(index<low || index>high){
            return;
        }

        if(low==high){
            tree[pos] = new_value;
            return;
        }
        
        int mid = (high+low)/2;
        update(low, mid, index, new_value, pos*2+1);
        update(mid+1, high, index, new_value, pos*2+2);

        tree[pos] = Math.min(tree[pos*2+1], tree[pos*2+2]);
    }

    private static int query(int low,int high){
        return query(0,initial_arr.length-1,low, high, 0);
    }

    private static int query(int low,int high,int query_low,int query_high,int pos){
        if(query_low<=low && query_high>=high){
            return tree[pos];
        }

        if(query_low>high || query_high<low){
            return Integer.MAX_VALUE;
        }

        int mid = (high+low)/2;

        return  Math.min(
                    query(low, mid, query_low, query_high, pos*2+1),
                    query(mid+1, high, query_low, query_high, pos*2+2)
                );
    }

    private static void print_tree(){
        for(int it:tree){
            System.out.print(it+" ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        FastReader reader = new FastReader();
    
        int[] arr = {2,3,-1,7,1,8};
        build(arr);
        print_tree();
        // update(2, 3);
        // print_tree();
        int val = query(5, 5);
        System.out.println(val);
        
    }
}