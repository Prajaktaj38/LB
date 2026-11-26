///number system  : print the odd digits of a number
// inpute: 8967         --->    9       7
// inpute : 4268        --->    no output
// inpute: 5799         ---->   5   7   9   9

#include<stdio.h>
#include<stdlib.h>

void DisplayOddDigits( int iNo)
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
            printf("%d\n", idigit);
        }       
        iNo = iNo /10;
    }
}
int main()
{
    int iValue = 0;

    printf("enter number : \n");
    scanf("%d", &iValue);

    DisplayOddDigits(iValue);
    return EXIT_SUCCESS;
}