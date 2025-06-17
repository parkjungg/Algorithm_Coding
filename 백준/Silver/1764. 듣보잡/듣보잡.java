import java.io.*;
import java.util.*;

// Silver 4 듣보잡
public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        HashSet<String> set = new HashSet<>();
        HashSet<String> set2 = new HashSet<>();

        String[] num = br.readLine().split(" ");
        int N = Integer.parseInt(num[0]);
        int M = Integer.parseInt(num[1]);
        int number = 0;

        // 듣도 못한 사람 명단 입력
        for (int i = 0; i < N; i++) {
            set.add(br.readLine());
        }

        // 보도 못한 사람 명단 입력 및 듣보잡 체크
        for (int i = 0; i < M; i++) {
            String a = br.readLine();
            if(set.contains(a)) {
                number++;
                set2.add(a);
            }
        }
        List<String> sortedList = new ArrayList<>(set2);
        Collections.sort(sortedList);
        
        bw.write(String.valueOf(number) + "\n");
        for (String s : sortedList) {
            bw.write(s + "\n");
            bw.flush();
        }
        bw.close();
    }
}
