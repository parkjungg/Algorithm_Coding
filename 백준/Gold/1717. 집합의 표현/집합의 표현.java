import java.util.Scanner;
public class Main {
    static int[] parentarr;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        parentarr = new int[n+1];
        // 배열 초기화
        for(int i = 1; i < n+1; i++) {
            parentarr[i] = i;
        }

        while(k > 0) {
            int JQ = sc.nextInt();
            int a = sc.nextInt();
            int b = sc.nextInt();

            if(JQ == 0) {
                union(a,b);
            }
            else if(JQ == 1) {
                if(find(a) == find(b)) {
                    System.out.println("YES");
                }
                else {
                    System.out.println("NO");
                }
            }
            k--;
        }
    }
    static void union(int a, int b) {
        int A = find(a);
        int B = find(b);
        parentarr[B] = A;
    }
    static int find(int x) {
        if(parentarr[x] == x) return x;
        return parentarr[x] = find(parentarr[x]);
    }
}
