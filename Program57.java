import java.util.Scanner;
class Program57
{
    public static void main(String A[])
    {
        Scanner scanner = new Scanner(System.in);
        int ivalue = 0;
        Iteration iobj = new Iteration();

        System.out.println("Enter the frequency");
        ivalue = scanner.nextInt();
        iobj.Display(ivalue);

    } 
   
}
class Iteration
{
    public void Display(int iNo)
    {
        int icnt = 0;
        for (icnt = 1; icnt<=iNo; icnt++)
        {
            System.out.println("JayGanesh");
        }
    }
}