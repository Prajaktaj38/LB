#include<stdio.h>
#include<stdlib.h>

long long Factorial(int iNo)
{
     int iCnt = 0;
     long long  iFact = 1;
    for(iCnt = 1, iFact = 1; iCnt<=iNo; iCnt++)
    {
       iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0; 
    int iRet = 0;

    printf("Enter the Number:\n");
    scanf("%d", &iValue); 
    long long iRet =  Factorial(iValue);  
    
    printf("Factorial is : %lld\n", iRet);

    return EXIT_SUCCESS;
}                                                                                                                       