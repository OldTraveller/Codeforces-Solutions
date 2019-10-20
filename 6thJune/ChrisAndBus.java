import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;
import java.io.IOException; 

public class ChrisAndBus {
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(); 
        int rows = in.nextInt(); 
        int whichrow = -1; 
        int whichcol = -1; 
        String[] config = new String[rows]; 
        for (int i = 0; i < rows; i++) {
            config[i] = in.next(); 
            if (config[i].charAt(0) == 'O' && config[i].charAt(1) == 'O') {
                whichrow = i; 
                whichcol = 0; 
            }
            if (config[i].charAt(3) == 'O' && config[i].charAt(4) == 'O') {
                whichrow = i; 
                whichcol = 3; 
            }
        }
        if (whichrow == -1) {
            println("NO");
        } else {
            println("YES");
            for (int i = 0; i < rows; i++) {
                if (i == whichrow) {
                    for (int j = 0; j < 5; j++) {
                        if (whichcol == j || j == whichcol + 1) print("+"); 
                        else print(config[i].charAt(j));
                    }
                    println("");
                } else {
                    println(config[i]); 
                }
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