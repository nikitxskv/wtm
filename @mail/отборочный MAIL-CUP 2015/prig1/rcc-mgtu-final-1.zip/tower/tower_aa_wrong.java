import java.io.*;
import java.util.*;
import java.math.*;

public class tower_aa_wrong implements Runnable {

	public static void main(String[] args) {
		new Thread(new tower_aa_wrong()).start();
	}

	public void run() {
		try {
			solve();
		} catch (IOException e) {
		}
	}

	private void MyAssert(boolean u, String message) {
		if (!u) {
			throw new Error("Assertion failed!!! " + message);
		}
	}

	BufferedReader br;

	StringTokenizer st;

	PrintWriter out;

	boolean eof = false;

	String nextToken() {
		while (st == null || !st.hasMoreTokens()) {
			try {
				st = new StringTokenizer(br.readLine());
			} catch (IOException e) {
				eof = true;
				return "0";
			}
		}
		return st.nextToken();
	}

	String nextToken(String delim) {
		while (st == null || !st.hasMoreTokens()) {
			try {
				st = new StringTokenizer(br.readLine());
			} catch (IOException e) {
				eof = true;
				return "0";
			}
		}
		return st.nextToken(delim);
	}

	int nextInt() {
		return Integer.parseInt(nextToken());
	}

	int nextInt(String delim) {
		return Integer.parseInt(nextToken(delim));
	}

	String FILENAME = "tower";

	class Block implements Comparable<Block> {
		int l;

		char color;

		public Block(int i, String string) {
			l = i;
			color = string.charAt(0);
		}

		public int compareTo(Block arg0) {
			return -(l - arg0.l);
		}

	}

	void solve() throws IOException {
		br = new BufferedReader(new FileReader(FILENAME + ".in"));
		out = new PrintWriter(FILENAME + ".out");
		int n = nextInt();
		MyAssert(1 <= n && n <= 50000, "n not in bounds!!!");
		Block[] a = new Block[n + 1];
		for (int i = 0; i < n; i++) {
			a[i] = new Block(nextInt(), nextToken());
			MyAssert(a[i].l <= 1e+7, "Length of cunes not in bounds!!!");
		}
		a[n] = new Block(0, "R");
		Arrays.sort(a);
		long[] square = new long[256];
		for (int i = 0; i < n; i++) {
			square[a[i].color] += 5 * a[i].l * a[i].l - a[i + 1].l * a[i + 1].l;
		}
		out.println("R - " + square['R']);
		out.println("G - " + square['G']);
		out.println("B - " + square['B']);
		out.close();
	}
}
