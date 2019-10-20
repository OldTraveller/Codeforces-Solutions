import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;
import java.io.IOException; 

public class SantaClaus {
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(); 
        /* 
            APPROACH : We maintain an array of characters and their 
            counts for the host and the residence. 
            Make a similar array for the pile alone. 
            Just compare the two arrays. If the counts of the number 
            of characters in both the arrays matches for each of the 
            characters then the pile is valid. Otherwise it ain't. 
        */ 
        String host = in.next(); 
        String residence = in.next(); 
        String pile = in.next(); 
        int[] countsHR = new int[26]; 
        int[] countsPile = new int[26]; 
        for (int i = 0; i < host.length(); i++) {
            countsHR[host.charAt(i) - 'A']++; 
        }
        for (int i = 0; i < residence.length(); i++) {
            countsHR[residence.charAt(i) - 'A']++; 
        }
        for (int i = 0; i < pile.length(); i++) {
            countsPile[pile.charAt(i) - 'A']++; 
        }
        boolean no = false; 
        for (int i = 0; i < 26; i++) {
            if (countsHR[i] != countsPile[i]) {
                no = true; 
                break; 
            }
        }
        if (no) println("NO"); 
        else println("YES"); 
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