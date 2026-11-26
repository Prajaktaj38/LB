#include<stdio.h>
#include<stdlib.h>

int Minimum(int iNo1, int iNo2)
{
    if(iNo1 < iNo2)
    {
         return iNo1;
    }
    else
    {
        return iNo2;
    }    
}
int main()
{
    int ivalue1 = 0, ivalue2 = 0, iresult = 0;
   
    printf("Enter first number : \n");
    scanf("%d",ivalue1);

    printf("Enter second number : \n");
    scanf("%d",ivalue2);

    iresult = Minimum(ivalue1, ivalue2);
    
    printf("Minimum is : %d\n",iresult);
    
    return EXIT_SUCCESS;
}