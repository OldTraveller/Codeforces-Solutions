import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;
import java.io.IOException; 

public class LinkedTreeSet {
        static LinkedHashMap<String, String> map = new LinkedHashMap<>(); 
        static Set<String> set = new HashSet<String>(); 
        static int overall = 0; 
        public static void main(String[] args) throws IOException {
                Scanner in = new Scanner(); 
                int q = in.nextInt(); 
                for (int i = 0; i < q; i++) {
                        String oldValue = in.next();
                        String newValue = in.next(); 
                        map.putIfAbsent(oldValue, newValue); 
                }
                ArrayList<Result> res = new ArrayList<>(); 
                for (Map.Entry<String, String> entries : map.entrySet()) {
                        String last = DFS(entries.getKey()); 
                        if (last != null) {
                                res.add(new Result(entries.getKey(), last)); 
                        }
                }
                println(res.size());
                for (Result a : res) {
                        println(a.oldName + " " + a.finalName);
                }
        }

        static class Result {
                String oldName;
                String finalName; 
                Result(String oldName, String finalName) {
                        this.oldName = oldName; 
                        this.finalName = finalName; 
                }
        }

        static String DFS(String curr) {
                if (!set.contains(curr)) {
                        if (map.containsKey(map.get(curr))) {
                                set.add(curr); 
                                return DFS(map.get(curr)); 
                        } else {
                                set.add(curr); 
                                return map.get(curr); 
                        }
                } else {
                        return null; 
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