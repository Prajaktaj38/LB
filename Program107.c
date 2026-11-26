#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void CheckPrime(int iNo)
{   
    int iCnt = 0;
    int iSum = 0;
    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt; 
        }
    }
    if(iSum == 1)
    {

    }
       
}

int main()
{
    int iValue = 0 ;

    printf("Enter number : \n");
    scanf("%d\n", &iValue);
    return EXIT_SUCCESS;
}