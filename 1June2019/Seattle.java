import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;
import java.io.IOException; 

public class Seattle {
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(); 
        int n = in.nextInt(); 
        String flights = in.next(); 
        int sf = getSF(flights); 
        int fs = getFS(flights); 
        if (sf > fs) println("YES");
        else println("NO");
    }

    static int getSF(String flights) {
        int counts = 0; 
        for (int i = 0; i < flights.length() - 1; i++) {
            if (flights.charAt(i) == 'S' &&  flights.charAt(i + 1) == 'F') counts++; 
        }
        return counts; 
    }

    static int getFS(String flights) {
        int counts = 0; 
        for (int i = 0; i < flights.length() - 1; i++) {
            if (flights.charAt(i) == 'F' &&  flights.charAt(i + 1) == 'S') counts++; 
        }
        return counts; 
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