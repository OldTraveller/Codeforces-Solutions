import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;
import java.io.IOException; 

/*
    APPROACH : 
    The different people with the different skills can be put into
    three different ArrayList with their numbers based on the type 
    value [1, 3]. 
    The total teams will be min(a, min(b, c)) if a, b, c are the total
    number of people in the respective teams. 
    Then simply iterate for the [minimum number of teams] times, and print
    the values in the ArrayLists at those positions in the different ArrayLists
    starting from [0, minValue] in space-separated form. 
*/
public class TeamOlympiad {
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(); 
        int n = in.nextInt(); 
        List<Integer> prog = new ArrayList<>(); 
        List<Integer> maths = new ArrayList<>(); 
        List<Integer> pe = new ArrayList<>(); 
        for (int i = 1; i <= n; i++) {
            int type = in.nextInt(); 
            if (type == 1) prog.add(i); 
            else if (type == 2) maths.add(i); 
            else if (type == 3) pe.add(i); 
        }
        int total = Math.min(prog.size(), Math.min(maths.size(), pe.size())); 
        println(total); 
        for (int i = 0; i < total; i++) {
            println(prog.get(i) + " " + maths.get(i) + " " + pe.get(i)); 
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