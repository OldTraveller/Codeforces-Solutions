import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;
import java.io.IOException; 

/*
    APPROACH : 
    Only if each color of the puppies has exactly one color. Then
    answer is "No" 
    otherwise always the puppies in the (>= 2) type of color can be 
    colored to the colors in the set of colors with just one puppy. 
    And ultimately coloring all of them. 
    Just maintain a HashMap of all the puppies count and the color. 
    If all the entries are 1. Since all lowercase letters are there 
    we can also use an array of 26 characters to store the counts. 
*/

public class Puppies {
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(); 
        Map<Character, Integer> counts = new HashMap<>(); 
        int n = in.nextInt();
        String puppies = in.next(); 
        for (int i = 0; i < n; i++) {
            if (counts.containsKey(puppies.charAt(i))) {
                counts.put(puppies.charAt(i), counts.get(puppies.charAt(i)) + 1); 
            } else {
                counts.put(puppies.charAt(i), 1);
            }
        }
        boolean canColor = false; 
        for (Map.Entry<Character, Integer> entry : counts.entrySet()) {
            if (entry.getValue() > 1) {
                canColor = true; 
            }
        }
        if (counts.size() == 1) canColor = true; 
        if (canColor) println("Yes"); 
        else println("No"); 
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