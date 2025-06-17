import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

// Silver 3 01타일
public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());
        int[] dp = new int[N+1];
        if(N == 1){
            System.out.println(1);
            return;
        }

        dp[1] = 1; dp[2] = 2;
        for (int i = 3; i <= N; i++) {
            dp[i] = (dp[i-1] + dp[i-2]) % 15746;
        }
        System.out.println(dp[N]);
    }
}

// N = 1 00    1
// N = 2 00, 11   2
// N = 3 001, 100, 111     3
// N = 4 0011, 0000, 1001, 1100, 1111    5
// N = 5 00001 10000 10011 11001 00111 11100 11111 00100 8
// N = 6 000000 111111 001111 100111 110011 111001 111100 000011