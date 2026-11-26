/*
    Input : 6457
    do  sum of digits and print average of digits
    Input : 76 --> 
    Out13---> 13/2 --> 6.5  Siranchya sarkha 
*/     

#include<stdio.h>
#include<stdlib.h>

float AverageDigits( int iNo)
{
    int idigit = 0,  iSum = 0, iCount = 0;
    float fAvg = 0.0f;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

   while(iNo != 0)
    {
        idigit = iNo % 10; 
        iSum = iSum + idigit;
        iCount++;                        
        iNo = iNo /10;       
    }
    fAvg = (float)iSum/ (float)iCount;
    return (fAvg);
}
int main()
{
    int iValue = 0 ;
    float fRet = 0.0f;

    printf("enter number : \n");
    scanf("%d", &iValue);

    fRet = AverageDigits(iValue);

    printf("Average of Digits : %f\n", fRet);
    
    return EXIT_SUCCESS;
}