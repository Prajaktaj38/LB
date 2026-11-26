///number system  : print the digits of a number
// inpute: 8967         --->    6       8
// inpute : 4268        --->    8       6       1     4
// inpute: 5799         ----> no output

#include<stdio.h>
#include<stdlib.h>

void DisplayEvenDigits( int iNo)
{
    int idigit = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

   while(iNo != 0)
    {
        idigit = iNo % 10;
        if((idigit % 2 ) == 0)
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

    DisplayEvenDigits(iValue);
    return EXIT_SUCCESS;
}