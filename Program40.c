#include<stdio.h>
int main()
{
    int ivalue1 = 0, ivalue2 = 0, iresult = 0;
    printf("Enter first number");
    scanf("%d",ivalue1);

    printf("Enter second number");
    scanf("%d",ivalue2);

    if(ivalue1 > ivalue2)
    {
        printf("%d is maximum ",ivalue1);
    }
    else
    {
        printf("%d is maximum ",ivalue2);

    }
    return EXIT_SUCCESS;
}