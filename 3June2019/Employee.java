import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;
import java.io.IOException; 

public class Employee {
    static final int MAX_SIZE = 2007; 
    static ArrayList<Integer>[] graph = new ArrayList[MAX_SIZE]; 
    static {
        for (int i = 0; i < MAX_SIZE; i++) graph[i] = new ArrayList(); 
    }
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(); 
        int n = in.nextInt(); 
        ArrayList<Integer> bosses = new ArrayList<>(); 
        for (int i = 1; i <= n; i++) {
            int boss = in.nextInt();
            if (boss != -1) graph[boss].add(i); 
            else bosses.add(i); 
        }
        /* Problem simplifies to calculating the height of the Tree */ 
        int maximum = 1; 
        for (int i = 0; i < bosses.size(); i++) {
            boolean[] visited = new boolean[n + 1]; 
            maximum = Math.max(maximum, dfs(bosses.get(i), visited)); 
        }
        println(maximum);
    }

    static int dfs(int node, boolean[] visited) {
        if (visited[node]) return 0; 
        else {
            visited[node] = true; 
            int maxSubtree = 0;
            for (int a : graph[node]) {
                maxSubtree = Math.max(maxSubtree, dfs(a, visited)); 
            }
            return 1 + maxSubtree; 
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