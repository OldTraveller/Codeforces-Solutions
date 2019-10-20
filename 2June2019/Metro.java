import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;
import java.io.IOException; 

public class Metro {
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(); 
        int n = in.nextInt(); 
        int s = in.nextInt(); 
        int[] firstRoute = new int[n + 1]; 
        int[] secondRoute = new int[n + 1]; 
        for (int i = 1; i <= n; i++) firstRoute[i] = in.nextInt(); 
        for (int i = 1; i <= n; i++) secondRoute[i] = in.nextInt(); 
        if (firstRoute[1] == 0) println("NO"); 
        else {
            if (firstRoute[s] == 1) println("YES");
            else {
                int lastStation = findLast(firstRoute, secondRoute, n); 
                if (lastStation >= s && secondRoute[s] == 1) println("YES");
                else println("NO");
            }
        }
    }

    static int findLast(int[] firstRoute, int[] secondRoute, int n) {
        for (int i = n; i >= 1; i--) {
            if (firstRoute[i] == 1 && secondRoute[i] == 1) return i; 
        }
        return -1; 
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