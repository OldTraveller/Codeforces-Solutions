import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;
import java.io.IOException; 

public class NaughtyStudents {
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(); 
        int n = in.nextInt(); 
        int[] pointsAt = new int[n + 1]; 
        for (int i = 1; i <= n; i++) {
            pointsAt[i] = in.nextInt(); 
        }
        for (int i = 1; i <= n; i++) {
            print(solve(pointsAt, i) + " "); 
        }
    }

    static int solve(int[] pointsAt, int who) {
        int culprit = who; 
        boolean[] visited = new boolean[pointsAt.length + 1]; 
        while (!visited[who]) {
            visited[who] = true; 
            who = pointsAt[who]; 
        }
        return who; 
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