///number system  : print the digits of a number

#include<stdio.h>
#include<stdlib.h>

void DisplayDigits( int iNo)
{
    int idigit = 0;   
       
    while(iNo != 0)
    {
        idigit = iNo % 10;
        printf("%d\n", idigit);
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