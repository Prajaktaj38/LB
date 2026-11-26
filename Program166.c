/*
    Input : 48967
    
    Sum
*/     

#include<stdio.h>
#include<stdlib.h>

int SumDigits( int iNo)
{
    int idigit = 0,  iSum = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

   while(iNo != 0)
    {
        idigit = iNo % 10;
        iSum = iSum + idigit;             
        iNo = iNo /10;
    }
    return iSum;
}
int main()
{
    int iValue = 0 , iRet = 0;

    printf("enter number : \n");
    scanf("%d", &iValue);

    iRet = SumDigits(iValue);

    printf("Summession of Digits is : %d\n", iRet);
    
    return EXIT_SUCCESS;
}