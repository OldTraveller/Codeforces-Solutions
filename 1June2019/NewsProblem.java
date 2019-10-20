import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;
import java.io.IOException; 

public class NewsProblem {
    static final int MAX_SIZE = 500005 + 77; 
    static int[] parent = new int[MAX_SIZE]; 
    static int[] counts = new int[MAX_SIZE]; 
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(); 
        int n = in.nextInt(); 
        int m = in.nextInt(); 
        for (int i = 1; i <= n; i++) {
            parent[i] = i;
            counts[i] = 1; 
        }
        for (int i = 0; i < m; i++) {
            int ki = in.nextInt(); 
            int last = -1; 
            for (int j = 0; j < ki; j++) {
                int per = in.nextInt(); 
                if (last != -1) connect(per, last); 
                last = per; 
            }
        }
        for (int p = 1; p <= n; p++) {
            print(counts[getParent(p)] + " "); 
        }
    }

    static void connect(int a, int b) {
        a = getParent(a); 
        b = getParent(b); 
        if (a == b) return; 
        else {
            if (counts[a] < counts[b]) swap(a, b);
            parent[b] = a; 
            counts[a] += counts[b]; 
        }
    }

    static void swap(Integer a, Integer b) {
        int temp = a; a = b; b = temp; 
    }

    static int getParent(int x) {
        if (x == parent[x]) return x;
        else return parent[x] = getParent(parent[x]); 
    }

    static int gcd(int a, int b) {
        if (a == 0) return b;
        return gcd(b%a, a); 
    }

    static void println(Object obj) {
        System.out.println(obj);
    }

    static void print(Object obj) {
        System.out.print(obj); 
    }

    /* CUSTOM IMPLEMENTATION OF Scanner FOR FASTER IO */ 
    public static class Scanner {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in)); 
        StringTokenizer tk = null; 

        String next() throws IOException {
            while (tk == null || !tk.hasMoreTokens()) {
                tk = new StringTokenizer(br.readLine()); 
            }
            return tk.nextToken(); 
        }

        String nextLine() throws IOException {
            String toReturn = ""; 
            try {
                toReturn = br.readLine(); 
            } catch(Exception e) {
                e.printStackTrace();
            }
            return toReturn; 
        }

        int nextInt() throws IOException {
            return Integer.parseInt(next()); 
        }
      
        long nextLong() throws IOException {
            return Long.parseLong(next());  
        }

        double nextDouble() throws IOException {
            return Double.parseDouble(next()); 
        }
    }
}