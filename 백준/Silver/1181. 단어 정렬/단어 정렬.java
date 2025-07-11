import java.util.*;

// Silver 5 단어 정렬
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        String[] arr = new String[N];
        sc.nextLine();
        for (int i = 0; i < N; i++) {
            arr[i] = sc.nextLine();
        }

        Arrays.sort(arr, new Comparator<String>() {
            @Override
            public int compare(String o1, String o2) {
                if(o1.length() == o2.length()) {
                    return o1.compareTo(o2);
                }
                else {
                    return o1.length() - o2.length();
                }
            }
        });
        System.out.println(arr[0]);
        for (int i = 1; i < N ; i++) {
            if(!arr[i].equals(arr[i-1])) {
                System.out.println(arr[i]);
            }
        }
        sc.close();
    }
}
