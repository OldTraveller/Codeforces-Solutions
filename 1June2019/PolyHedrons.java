import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;
import java.io.IOException; 

public class PolyHedrons {
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(); 
        int th, c, oh, dd, ico; 
        th = c = oh = dd = ico = 0; 
        int n = in.nextInt(); 
        for (int i = 0; i < n; i++) {
            String type = in.next(); 
            if (type.equals("Tetrahedron")) th++; 
            else if (type.equals("Cube")) c++; 
            else if (type.equals("Octahedron")) oh++; 
            else if (type.equals("Dodecahedron")) dd++; 
            else if (type.equals("Icosahedron")) ico++; 
        }
        int total = th*4 + c*6 + oh*8 + dd*12 + ico*20; 
        println(total); 
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