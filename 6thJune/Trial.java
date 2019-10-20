import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;
import java.io.IOException; 

public class Trial {
        public static void main(String[] args) throws IOException {
                Scanner in = new Scanner(); 
                String input = in.nextLine(); 
                StringTokenizer tokenizer = new StringTokenizer(input); 
                while (tokenizer.hasMoreTokens()) {
                        StringBuilder builder = new StringBuilder(tokenizer.nextToken()); 
                        builder.reverse(); 
                        if (builder.charAt(0) >= (char)98 && builder.charAt(0) <= (char)(98 + 25)) {
                                builder.setCharAt(0, (char)(builder.charAt(0) - (32)));
                        }
                        print(builder.toString() + " ");
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