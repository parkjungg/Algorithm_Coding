import java.util.Scanner;

public class Main{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int count = 0;
        int a = sc.nextInt();
        int copy = a;
        
        while(true)
        {
            a = (((a/10) + (a%10))%10) + ((a%10)*10);
            count++;
            if(copy == a)
                break;
            
        }
        System.out.printf("%d",count);
    }
                            
}