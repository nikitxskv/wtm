import java.util.*;
import java.io.*;

public class binary_mb {
    public static void main(String[] args) throws IOException {
	Scanner in = new Scanner(new File("binary.in"));
	long v = in.nextLong();
	in.close();
	
	String sRep = Long.toString(v, 2);
	ArrayList<Long> values = new ArrayList<Long>();
	for (int l = 0; l < sRep.length(); ++l) {
	    for (int r = l + 1; r <= sRep.length(); ++r) {
		values.add(Long.parseLong(sRep.substring(l, r), 2));
	    }
	}
	Collections.sort(values);
	values.add(-1L);
	long answer = 0;
	for (int i = 0; i < values.size() - 1; ++i) {
	    if (values.get(i).longValue() != values.get(i + 1).longValue()) {
		answer += values.get(i);
	    }
	} 
	
	PrintWriter out = new PrintWriter("binary.out");
	out.println(answer);
	out.close();
    }
}
