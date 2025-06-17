import java.util.Scanner;

public class Main{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int A,B,result;
        A = sc.nextInt();
        B = sc.nextInt();
        
        result = A - B;
        System.out.printf("%d",result);
    }
}