/*
    Input : 6457
    do  sum of digits and print average of digits
    Input : 76 --> 
    Out13---> 13/2 --> 6.5  Siranchya sarkha using width specifier
    print sum of digits also and count also. final code
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

float AverageDigits(int iTotal, int iFrequency)
{
    float fAns = 0.0f;

    fAns = (float)iTotal/(float)iFrequency;

    return fAns;
}

int main()
{
    int iValue = 0, iSum = 0, iCount = 0;
    float fAvg = 0.0f;

    printf("enter number : \n");
    scanf("%d", &iValue);
    
    iSum = SumDigits(iValue);
    iCount = CountDigits(iValue);
   
    fAvg = AverageDigits(iSum, iCount);  

    printf("Number of Digits : %d\n", iCount);
    printf("Summesion of Digits : %d\n", iSum);
    printf("Average of Digits : %.2f\n", fAvg); //width specifier
    
    return EXIT_SUCCESS;
}