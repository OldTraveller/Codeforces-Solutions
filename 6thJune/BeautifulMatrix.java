import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;
import java.io.IOException; 

public class BeautifulMatrix {
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(); 
        int posx = 0, posy = 0; 
        for (int i = 1; i <= 5; i++) {
            for (int j = 1; j <= 5; j++) {
                boolean isOne = in.nextInt() == 1; 
                if (isOne) {
                    posx = i; 
                    posy = j; 
                }
            }
        }
        println(Math.abs(3 - posx) + Math.abs(3 - posy));
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