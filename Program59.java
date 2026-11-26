import java.util.scanner;
class Program59
{
    public static void main(String A[])
    {
        Scanner scanner = new Scanner(System.in);
        int ivalue = 0;
        Iteration iobj = new Iteration();

        System.out.println("Enter the frequency");
        ivalue = scanner.maxInt();
        iobj.Display(ivalue);

    } 
   
}
class Iteration
{
    public void Display(int iNo)
    {
        int icnt = 0;


        //input updator
        if(NO <0)
        {
            system.out.println("Invalid Input");
            return ;
        }
        for (icnt = 1; icnt<=iNo; icnt++)
        {
            System.out.println("JayGanesh");
        }
    }
}