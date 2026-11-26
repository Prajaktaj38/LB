/*
    input : 721
    Output 127
    input : 123
    Output : 321
    input : 009
    output : 9
    inout : 7508
    Output : 8057
    Display reverse number not reverse order. 
*/     

#include<stdio.h>
#include<stdlib.h>

int Reverse(int iNo)
{
    int iDigit = 0, iRev = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    return iRev;
}
  
int main()
{
    int iValue = 0, iRet = 0;

    printf("enter number : \n");
    scanf("%d", &iValue);

    iRet = Reverse(iValue);

    printf("Reverse Number is : %d\n", iRet);
    
    return EXIT_SUCCESS;
}