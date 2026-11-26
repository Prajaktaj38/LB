//input = 10 
//output 1,3,5,7,9


#include<stdio.h>
#include<stdlib.h>

int Summesion(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)// Best code
    {    
        iSum = iSum + iCnt;

    }

    return iSum;       
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the frequency:\n");
    scanf("%d", &iValue);

    iRet = Summesion(iValue);

    printf("Summession is : %d\n",iRet);

    return EXIT_SUCCESS;
}