import java.util.Scanner;
class Program67
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
        icnt = 1;
     
        // for (icnt = 1; icnt <= iNo; icnt++)
        // {
        //     System.out.println(".........");        
        //     System.out.println("JayGanesh");
        //     System.out.println(".........");
        // }     

       do
       {
            System.out.println(".........");        
            System.out.println("JayGanesh");
            System.out.println(".........");
            icnt++;

       }while(icnt<=iNo);
        
    }
}