import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;
import java.io.IOException; 

public class WolfAndSheep {
    static char[][] astabal = new char[501][501]; 
    static int R = 500, C = 500; 
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(); 
        R = in.nextInt(); 
        C = in.nextInt(); 
        for (int i = 0; i < R; i++) {
            String nextRow = in.next(); 
            for (int j = 0; j < C; j++) {
                astabal[i][j] = nextRow.charAt(j); 
            }
        }
        solve(R, C); 
    }

    static boolean validBlock(int i, int j) {
        return i >= 0 && j >= 0 && j < C && i < R; 
    }
    
    static boolean hasWolf(char who) {
        return who == 'W'; 
    }

    static boolean checkSafe(int i, int j) {
        if (validBlock(i, j + 1) && hasWolf(astabal[i][j + 1])) return false;
        if (validBlock(i, j - 1) && hasWolf(astabal[i][j - 1])) return false;
        if (validBlock(i - 1, j) && hasWolf(astabal[i - 1][j])) return false;
        if (validBlock(i + 1, j) && hasWolf(astabal[i + 1][j])) return false; 
        return true;
    }

    static void solve(int R, int C) {
        boolean possible = true; 
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                if (astabal[i][j] == 'S') {
                    if (!checkSafe(i, j)) {
                        possible = false; 
                        break; 
                    }
                }
            }
            if (!possible) break; 
        }
        if (!possible) println("NO"); 
        else {
            println("YES");
            for (int i = 0; i < R; i++) {
                for (int j = 0; j < C; j++) {
                    if (astabal[i][j] == '.') print("D");
                    else print(astabal[i][j]); 
                }
                println(""); 
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