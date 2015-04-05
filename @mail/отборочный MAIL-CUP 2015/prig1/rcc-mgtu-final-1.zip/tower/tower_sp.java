import java.io.*;
import java.util.*;

public class tower_sp implements Runnable {

    public static void main(String[] args) {
        new Thread(new tower_sp()).run();
    }

    public void run() {
        try {
            solve();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    BufferedReader br;

    PrintWriter out;

    StringTokenizer st;

    String nextToken() throws IOException {
        while (st == null || !st.hasMoreTokens()) {
            st = new StringTokenizer(br.readLine());
        }
        return st.nextToken();
    }

    int nextInt() throws IOException {
        return Integer.parseInt(nextToken());
    }
    
    void myAssert(boolean e, String s) {
        if (!e) {
            throw new Error("Assertion failure " + s);
        }
    }

    private static final String FILENAME = "tower";
    
    class Cube implements Comparable<Cube> {
        long l;
        char ch;
        Cube(int l, char ch) {
            this.l = l;
            this.ch = ch;
        }
        public int compareTo(Cube o) {
            return (int)(this.l - o.l);
        }
        
    }

    public void solve() throws IOException {
        br = new BufferedReader(new InputStreamReader(System.in));
        out = new PrintWriter(System.out);
        int n = nextInt();
        myAssert(n >= 1 && n <= 50000, "Wrong number of cubes");
        Cube[] cubes = new Cube[n + 1];
        cubes[n] = new Cube(0, 'R');
        HashSet<Long> hs = new HashSet<Long>();
        for (int i = 0; i < n; i++) {
            cubes[i] = new Cube(nextInt(), nextToken().charAt(0));
            myAssert(!hs.contains(cubes[i].l), "Two cubes with the same edge");
            myAssert(cubes[i].l >= 1 && cubes[i].l <= 1e7, "Wrong length of edge");
            hs.add(cubes[i].l);
        }
        Arrays.sort(cubes);
        long sR = 0;
        long sG = 0;
        long sB = 0;
        for (int i = 1; i <= n; i++) {
            switch (cubes[i].ch) {
            case 'R':
                sR += 5 * cubes[i].l * cubes[i].l - cubes[i - 1].l * cubes[i - 1].l; 
                break;
            case 'G':
                sG += 5 * cubes[i].l * cubes[i].l - cubes[i - 1].l * cubes[i - 1].l; 
                break;
            case 'B':
                sB += 5 * cubes[i].l * cubes[i].l - cubes[i - 1].l * cubes[i - 1].l; 
                break;
            }
        }
        out.println(sR);
        out.println(sG);
        out.println(sB);
        out.close();
    }
}
