import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;
import java.io.IOException; 

public class Contigous {
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(); 
        int n = in.nextInt(); 
        boolean isOne = false; 
        int first = in.nextInt(); 
        int oneCount = 0; 
        int twoCount = 0; 
        if (first == 1) {
            isOne = true; 
            oneCount++; 
        } else {
            twoCount++; 
        }
        ArrayList<Integer> counts = new ArrayList<Integer>(); 
        for (int i = 0; i < n - 1; i++) {
            int ele = in.nextInt(); 
            if (isOne && ele == 1) {
                oneCount++; 
            } else if (isOne && ele == 2) {
                isOne = false; 
                counts.add(oneCount); 
                oneCount = 0; 
                twoCount = 1; 
            } else if (!isOne && ele == 1) {
                isOne = true; 
                counts.add(twoCount); 
                oneCount = 1; 
                twoCount = 0; 
            } else if (!isOne && ele == 2) {
                twoCount++; 
            }
        }
        if (isOne) {
            counts.add(oneCount); 
        } else {
            counts.add(twoCount); 
        }
        // displayCounts(counts); 
        int ans = Integer.MIN_VALUE; 
        for (int i = 0; i < counts.size() - 1; i++) {
            ans = Math.max(ans, Math.min(counts.get(i), counts.get(i + 1))); 
        }
        println(ans * 2); 
    }

    static void displayCounts(ArrayList<Integer> counts) {
        println("The List is : ");
        for (int a : counts) {
            print(a + " "); 
        }
        println(""); 
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
