#include<stdio.h>
#include<stdlib.h>

void CheckEven(int iNO1)
{
    if((iNO1 % 2) == 0)
    {
        printf("It is even number\n");
    }
    else
    {
        printf("It is odd number    \n");
    }
}

int main()
{
    int ivalue = 0;
    printf("Enter Number : ");
    scanf("%d",&ivalue);
    
    CheckEven(ivalue);
    
    return EXIT_SUCCESS;
}