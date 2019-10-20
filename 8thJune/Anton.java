import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;
import java.io.IOException; 

public class Anton {
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(); 
        int k2 = in.nextInt(); 
        int k3 = in.nextInt(); 
        int k5 = in.nextInt(); 
        int k6 = in.nextInt(); 
        int tot256 = Math.min(k2, Math.min(k5, k6)); 
        k2 -= tot256; 
        k5 -= tot256; 
        k6 -= tot256; 
        int tot32 = Math.min(k3, k2); 
        long sum = ((long)256 * tot256 + (long)32 * tot32); 
        println(sum);
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
            String toReturn = new String();
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