import java.util.*;
import java.io.*;

public class LessOrEqual {
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(); 
        TreeMap<Long, Long> tree = new TreeMap<>(); 
        long n = in.nextLong();
        long k = in.nextLong(); 
        for (int i = 0; i < n; i++) {
            long ele = in.nextLong(); 
            if (tree.containsKey(ele)) tree.put(ele, tree.get(ele) + 1); 
            else tree.put(ele, 0L);
        }
        long counts = 0; 
        long answer = -1; 
        for (Map.Entry<Long, Long> entry : tree.entrySet()) {
            println("FREQUENCY OF : " + entry.getKey() + " : " + entry.getValue()); 
            if (counts == k) {
                answer = entry.getKey(); 
                break; 
            } else counts += entry.getValue();
        }
        println(answer); 
    }

    static void println(Object obj) {
        System.out.println(obj);
    }

    static void print(Object obj) {
        System.out.print(obj);
    }

    static int GCD(int a, int b) {
        if (a == 0) return b; 
        return GCD(b % a, a); 
    }

    static class Scanner {
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
            toReturn = br.readLine(); 
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