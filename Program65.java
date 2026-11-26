public class Program65
{
    public static void main(String A[])
    {
        Iteration iobj = new Iteration();
    iobj.Display();

    } 
   
}
class Iteration
{
    public void Display()
    {
        int icnt = 0;
        for (icnt = 5; icnt >=5; icnt--)             //Infinite loop
        {
            System.out.println(icnt + "Jay Ganesh...");
        }
    }
} 