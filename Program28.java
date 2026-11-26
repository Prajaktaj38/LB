import java.util.Scanner;

class Program28
{
    public static void main(String A[])
    {        
        Scanner scanner = null;
         String sName = null;
         int Age = 0;
         float fMarks = 0.0f;

        scanner = new Scanner(System.in);

        System.out.println("Enter your name : ");
        sName = scanner.next();     //Exception

        System.out.println("Enter your Age : ");
        Age = scanner.nextInt();

        
        System.out.println("Enter your fMarks : ");
        fMarks = scanner.nextFloat();

        System.out.println("Welcome "+sName);
        System.out.println("Your Age is : "+Age);
        System.out.println("Your Marks : "+fMarks);
    }   
}