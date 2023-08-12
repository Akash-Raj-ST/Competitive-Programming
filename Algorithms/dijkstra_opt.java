import java.util.*;
import java.io.*;

class Pair<A,B>{
    public A first;
    public B second;

    public Pair(A first,B second){
        this.first = first;
        this.second = second;
    }

    public A getFirst() {
        return first;
    }

    public B getSecond() {
        return second;
    }

    public static <A extends Comparable<A>,B> Comparator<Pair<A, B>> compareByFirst() {
        return Comparator.comparing(Pair::getFirst);
    }

    public static <A, B extends Comparable<B>> Comparator<Pair<A, B>> compareBySecond() {
        return Comparator.comparing(Pair::getSecond);
    }
}

public class dijkstra_opt {
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

    public static void main(String[] args) {
        FastReader reader = new FastReader();
        
        ArrayList<ArrayList<Integer>> adj = new ArrayList<>();

        int n = reader.nextInt();

        System.out.println(n);

        for(int i=0;i<n;i++){
            ArrayList<Integer> row = new ArrayList<>();

            for(int j=0;j<n;j++){
                row.add(reader.nextInt());
            }
            adj.add(row);
        }

        for(int i=0;i<n;i++){

            for(int val:adj.get(i)){
                System.out.print(val);
            }
            System.out.println();
        }

        //algo

        ArrayList<ArrayList<Pair<Integer, Integer>>> adj_li = new ArrayList<>(n);

        for(int i=0;i<n;i++){
            ArrayList<Pair<Integer, Integer>> temp_arr = new ArrayList<>();
            for(int j=0;j<n;j++){
                if(adj.get(i).get(j)!=-1){
                    temp_arr.add(new Pair<Integer,Integer>(j,adj.get(i).get(j)));
                }
            }
            adj_li.add(temp_arr);
        }

        // for(PriorityQueue<Pair<Integer, Integer>> q:pq){
        //     for(Pair<Integer, Integer> pa: q){
        //         System.out.print(pa.first+"->"+pa.second+"||");
        //     }
        //     System.out.println();
        // }

        ArrayList<Integer> arr = new ArrayList<>(n);

        for(int i=0;i<n;i++) arr.add(-1);

        arr.set(0, 0);

        PriorityQueue<Pair<Integer,Integer>> pq = new PriorityQueue<>((a,b)->a.second-b.second);
        pq.add(new Pair<Integer,Integer>(0, 0));

        for(int i=0;i<n;i++){
            int u = pq.peek().first;
            int w = pq.peek().second;

            pq.poll();

            for(Pair<Integer,Integer> item: adj_li.get(u)){
                if(item.second+w<arr.get(item.first) || arr.get(item.first)==-1){
                    arr.set(item.first,item.second+w);
                    pq.add(new Pair<Integer,Integer>(item.first,item.second+w));
                }
            }
        }

        for(int val:arr){
            System.out.println(val);
        }
    }
}