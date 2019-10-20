import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;
import java.io.IOException; 

public class InfinityGauntlet {
        public static void main(String[] args) throws IOException {
                Scanner in = new Scanner(); 
                int n = in.nextInt(); 
                Map<String, String> mp = new HashMap<>();
                mp.put("purple", "Power"); 
                mp.put("green", "Time");
                mp.put("blue", "Space");        
                mp.put("orange", "Soul"); 
                mp.put("red", "Relity"); 
                mp.put("yellow", "Mind"); 
                for (int i = 0; i < n; i++) {
                        String color = in.next(); 
                        if (mp.containsKey(color)) {
                                mp.remove(color); 
                        }
                }
                println(mp.size()); 
                for (String stone : mp.values()) {
                        println(stone);
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