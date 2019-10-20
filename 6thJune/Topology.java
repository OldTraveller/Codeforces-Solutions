import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;
import java.io.IOException; 

public class Topology {
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(); 
        int n = in.nextInt(); 
        int m = in.nextInt(); 
        Graph topology = new Graph(n, m);
        for (int i = 0; i < m; i++) {
            int u = in.nextInt(); 
            int v = in.nextInt(); 
            topology.graph[u].add(v); 
            topology.graph[v].add(u); 
        }
        if (checkRing(topology)) println("ring topology");
        else if (checkStar(topology)) println("star topology"); 
        else if (checkBus(topology)) println("bus topology"); 
        else println("unknown topology"); 
    }
    
    /* 
                [ PROPERTIES OF RING TOPOLOGY ]
    1) |E| = |V|
    2) deg(V) = 2
    3) |V| > 2 
    */ 
    static boolean checkRing(Graph topology) {
        if (topology.nNodes < 3) return false; 
        if (topology.nEdges != topology.nNodes) return false; 
        for (int i = 1; i <= topology.nNodes; i++) {
            if (topology.graph[i].size() != 2) return false; 
        }
        return true; 
    }

    /*
                [ PROPERTIES OF STAR ] 
    1) ONE NODE IS CENTRAL - HAVING DEGREE |V| - 1
    2) NUMBER OF EDGES - |V| - 1
    3) ALL OTHER NODES HAVE DEGREE 1 
    */
    static boolean checkStar(Graph topology) {
        if (topology.nEdges != topology.nNodes - 1) return false; 
        int singles = 0; 
        int parents = 0; 
        for (int i = 1; i <= topology.nNodes; i++) {
            if (topology.graph[i].size() == 1) singles++; 
            else if (topology.graph[i].size() == topology.nNodes - 1) parents++; 
        }
        if (parents != 1 || singles != topology.nNodes - 1) return false; 
        return true; 
    }

    /*
                [ PROPERTIES OF BUS TOPOLOGY ] 
    1) ALL VERTICES OTHER THAN THE 1st AND Nth VERTEX HAVE A DEGREE 2. 
    2) 1st AND Nth VERTEX HAVE A DEGREE OF 1 
    3) |E| = |V| - 1
    */ 
    static boolean checkBus(Graph topology) {
        if (topology.nEdges != topology.nNodes - 1) return false; 
        int degOne = 0; 
        int degTwo = 0; 
        for (int i = 1; i <= topology.nNodes; i++) {
            if (topology.graph[i].size() == 1) degOne++; 
            else if (topology.graph[i].size() == 2) degTwo++; 
        }
        if (degOne != 2 || degTwo != topology.nNodes - 2) return false;
        return true; 
    }

    static class Graph {
        ArrayList<Integer>[] graph;
        int nNodes = 0; 
        int nEdges = 0; 
        Graph(int n, int e) {
            graph = new ArrayList[n + 1]; 
            nNodes = n; 
            nEdges = e; 
            for (int i = 0; i <= n; i++) {
                graph[i] = new ArrayList(); 
            }
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