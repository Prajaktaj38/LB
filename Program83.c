//input = 10 
//output 1,3,5,7,9


#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if (iNo %3 == 0)
    {
        printf("It is Divisible\n");
    }
    else
    {
        printf("It is not Divisible\n");

    }
         
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the frequency:\n");
    scanf("%d", &iValue);

    iRet = Summesion(iValue);

    printf("Summession is : %d\n",iRet);

    return EXIT_SUCCESS;
}