import java.io.*;
import java.util.*;

public class binary_ft implements Runnable {

    private Scanner in;
    private PrintWriter out;
    String fname = "binary";

    private void myAssert(boolean e, String message) {
        if (!e) {
            throw new Error("Assertion failure!!! " + message);
        }
    }

    public void solve() {
        long x = in.nextInt();
        myAssert(1 <= x && x <= (long) 1e12, "x is out of bounds");
        HashSet<Long> set = new HashSet<Long>();
        String s = Long.toString(x, 2);
        int n = s.length();
        long ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j <= n; j++) {
                String t = s.substring(i, j);
                long cur = Long.parseLong(t, 2);
                if (!set.contains(cur)) {
                    ans += cur;
                    set.add(cur);
                }
            }
        }
        out.println(ans);
    }

    public void run() {
        try {
            solve();
        } catch (Exception e) {
            e.printStackTrace();
            System.exit(1);
        } finally {
            out.close();
        }       
    }

    public binary_ft() {
        try {
            in = new Scanner(System.in);
            out = new PrintWriter(System.out);
        } catch (Exception e) {
            e.printStackTrace();
            System.exit(1);
        }
    }


    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        new Thread(new binary_ft()).start();
    }

}                       