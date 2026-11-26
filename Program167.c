/*
    Input : 48967
    
    count
*/     

#include<stdio.h>
#include<stdlib.h>

int CountDigits( int iNo)
{
    int idigit = 0,  iCount = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

   while(iNo != 0)
    {
        idigit = iNo % 10;
        iCount++;         
        iNo = iNo /10;
       
    }
    return iCount;
}
int main()
{
    int iValue = 0 , iRet = 0;

    printf("enter number : \n");
    scanf("%d", &iValue);

    iRet = CountDigits(iValue);

    printf("Number of Digits : %d\n", iRet);
    
    return EXIT_SUCCESS;
}