import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

// Silver 1 곱셈
public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        long A = Integer.parseInt(st.nextToken());
        long B = Integer.parseInt(st.nextToken());
        long C = Integer.parseInt(st.nextToken());

        System.out.println(pow(A, B, C));
    }
    private static long pow(long a, long b, long c) {

        if(b == 0) return 1;

        long half = pow(a, b/2, c);
        long result = (half * half) % c;

        if(b % 2 == 1) {
            result = (result * a) % c;
        }
        return result;
    }
}
