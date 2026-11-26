/*
    Input : 48967
    
    Output: 
        Odd : 7
        Even : 6
        Odd : 9
        Even : 8
        Even : 4
*/     

#include<stdio.h>
#include<stdlib.h>

void DisplayDigits( int iNo)
{
    int idigit = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

   while(iNo != 0)
    {
        idigit = iNo % 10;
        if((idigit % 2 ) != 0)
        {
            printf("Odd : %d\n", idigit);
        }
        else
        {
            printf("Even : %d\n", idigit );
        }       
        iNo = iNo /10;
    }
}
int main()
{
    int iValue = 0;

    printf("enter number : \n");
    scanf("%d", &iValue);

    DisplayDigits(iValue);
    return EXIT_SUCCESS;
}