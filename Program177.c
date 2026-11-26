/*
    input : 8998
    Output 8998
    input : 14341
    Output : 14341
    input : 7007
    output : 7007
    
    Palindrom number // issue solved
*/     

#include<stdio.h>
#include<stdlib.h>

#include<stdbool.h>

bool checkPalindrom(int iNo)
{
    int iDigit = 0, iRev = 0, iTemp = 0;

    iTemp = iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }

    if(iRev == iTemp) // issue solved
    {
       return true;
    }
    else
    {
        return false;
    } 
}
  
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("enter number : \n");
    scanf("%d", &iValue);

    bRet = checkPalindrom(iValue);

    if(bRet == true) // issue
    {
         printf("Number is Palindrom");
    }
    else
    {
        printf("Number is not Palindrom");
    }   
    
    return EXIT_SUCCESS;
}