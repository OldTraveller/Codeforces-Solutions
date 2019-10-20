import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;
import java.io.IOException; 

/*
    PROBLEM reduces to finding the number of possible ones 
    in range [i, j] and flipping 1 to 0 or 0 to 1 if present
    withing the range. Otherwise simply adding 1 if 1. 
    Time Complexity : O(N * N * N)
    Space Complexity : O(N)
    Auxilary Space : O(1) 
*/

public class OneMove {
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(); 
        int n = in.nextInt(); 
        int[] arr = new int[n]; 
        for (int i = 0; i < n; i++) {
            arr[i] = in.nextInt(); 
        }
        int maxOnes = 0; 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int ones = 0; 
                for (int k = 0; k < n; k++) {
                    if (k >= i && k <= j) {
                        if (arr[k] == 1) ones--;
                        else ones++; 
                    } else {
                        if (arr[k] == 1) ones++; 
                    }
                }
                maxOnes = Math.max(maxOnes, ones); 
            }
        }
        println(maxOnes); 
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