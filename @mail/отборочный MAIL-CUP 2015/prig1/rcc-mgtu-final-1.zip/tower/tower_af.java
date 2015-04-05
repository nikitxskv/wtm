import java.util.*;
import java.io.*;

public class tower_af implements Runnable {
    public static void main(String[] args) {
        new Thread(new tower_af()).start();
    }
    public void run() {
        try {
            solve();
        } catch(IOException e) {
            
        }
    }
    
    BufferedReader br;
    StringTokenizer st;
    PrintWriter out;
    
    String nextToken() {
        while (st == null || !st.hasMoreElements()) {
            try {
                st = new StringTokenizer(br.readLine());
            } catch (IOException e) {}
        }
        return st.nextToken();
    }
    
    int nextInt() {
        return Integer.parseInt(nextToken());
    }
    long nextLong() {
        return Long.parseLong(nextToken());
    }
    
    String Col = "RGB";
    
    void solve() throws IOException{
        br = new BufferedReader(new FileReader("tower.in"));
        out = new PrintWriter("tower.out");
        int n = nextInt();
        Pair[] tab = new Pair[n];
        for (int i = 0; i < n; i++) {
            tab[i] = new Pair();
            tab[i].l = nextLong();
            tab[i].c = nextToken().charAt(0);
        }
        Arrays.sort(tab);
        long[] ans = new long[3];
        for (int i = 0; i < n - 1; i++) {
            ans[Col.indexOf(tab[i].c)] += 5 * tab[i].l * tab[i].l - tab[i + 1].l * tab[i + 1].l;
        }
        ans[Col.indexOf(tab[n - 1].c)] += 5 * tab[n - 1].l * tab[n - 1].l;
        for (int i = 0; i < 3; i++) {
            out.println(Col.charAt(i) + " - " + ans[i]);
        }
        out.close();
    }
    
    public class Pair implements Comparable<Pair> {
        long l;
        char c;
        
        public int compareTo(Pair that) {
            if (this.l < that.l)
                return 1;
            else
                return -1;
        } 
        
    }
    
}
