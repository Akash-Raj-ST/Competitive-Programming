
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.*;

public class ENGXOR {
    static PrintWriter out;

    public static void main(String[] args) {
        FastReader sc = new FastReader();
        out = new PrintWriter(System.out);
        int t = sc.nextInt();

        while(t-->0){
            int n = sc.nextInt();
            int q = sc.nextInt();

            int arr[] = sc.readArray(n);
            int even=0,odd=0;
            for(int i=0;i<n;i++) {
                if(Integer.bitCount(arr[i])%2==0) even++;
                else odd++;
            }

            int query;
            while(q-->0){
                query = sc.nextInt();
                if(Integer.bitCount(query)%2==0)
                    out.println(even+" "+odd);
                else
                    out.println(odd+" "+even);

            }
        }
        out.close();
    }

        static class FastReader {
            BufferedReader br;
            StringTokenizer st;

            public FastReader() {
                br = new BufferedReader(
                        new InputStreamReader(System.in));
            }

            String next() {
                while (st == null || !st.hasMoreElements()) {
                    try {
                        st = new StringTokenizer(br.readLine());
                    } catch (IOException e) {
                        e.printStackTrace();
                    }
                }
                return st.nextToken();
            }

            int[] readArray(int n) {
                int[] a = new int[n];
                for (int i = 0; i < n; i++) a[i] = nextInt();
                return a;
            }

            int nextInt() {
                return Integer.parseInt(next());
            }

            long nextLong() {
                return Long.parseLong(next());
            }

            double nextDouble() {
                return Double.parseDouble(next());
            }

            String nextLine() {
                String str = "";
                try {
                    str = br.readLine();
                } catch (IOException e) {
                    e.printStackTrace();
                }
                return str;
            }
        }

}
