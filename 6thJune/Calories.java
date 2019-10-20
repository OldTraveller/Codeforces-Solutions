import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;
import java.io.IOException; 

public class Calories {
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(); 
        long a1 = in.nextLong(); 
        long a2 = in.nextLong(); 
        long a3 = in.nextLong(); 
        long a4 = in.nextLong(); 
        String order = in.next();
        long sum = 0L; 
        for (int i = 0; i < order.length(); i++) {
            if (order.charAt(i) == '1') sum += a1; 
            else if (order.charAt(i) == '2') sum += a2; 
            else if (order.charAt(i) == '3') sum += a3;
            else if (order.charAt(i) == '4') sum += a4; 
        }
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