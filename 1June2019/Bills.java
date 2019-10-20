import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;
import java.io.IOException; 

public class Bills {
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(); 
        // Since denominations are multiple of each other. Greedy should work ! 
        long n = in.nextLong(); 
        println(solve(n)); 
    }

    static long solve(long n) {
        long remaining = n; 
        long counts = 0; 
        while (remaining != 0) {
            if (remaining >= 100) remaining -= 100;
            else if (remaining >= 20) remaining -= 20; 
            else if (remaining >= 10) remaining -= 10; 
            else if (remaining >= 5) remaining -= 5; 
            else remaining--; 
            counts++; 
        }
        return counts; 
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