import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;
import java.io.IOException; 

public class KingEscape {
    static int[][] board = new int[1007][1007]; 
    static int n; 
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(); 
        n = in.nextInt(); 
        Pair queenPos = new Pair(in.nextInt(), in.nextInt()); 
        Pair kingsPos = new Pair(in.nextInt(), in.nextInt()); 
        Pair destination = new Pair(in.nextInt(), in.nextInt()); 
        boolean possible = false; 
        if ((kingsPos.x > queenPos.x && destination.x > queenPos.x) || 
            (kingsPos.x < queenPos.x && destination.x < queenPos.x)) {
            if (kingsPos.y > queenPos.y && destination.y > queenPos.y) possible = true; 
            else if (kingsPos.y < queenPos.y && destination.y < queenPos.y) possible = true; 
        }
        if (possible) println("YES");
        else println("NO"); 
    }

    static class Pair {
        int x, y;
        Pair(int x, int y) {
            this.x = x; 
            this.y = y; 
        }
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