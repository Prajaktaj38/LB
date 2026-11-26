#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
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
        return true;
    }
    else{
        return false;
    }
       
}

int main()
{
    int iValue = 0 ;
    bool bRet = false;

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("it is a prime number");
    }
    else{
        printf("it is not a prime number");
    }

    printf("Enter number : \n");
    scanf("%d\n", &iValue);
    return EXIT_SUCCESS;
}