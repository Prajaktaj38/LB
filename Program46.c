
//Accept 2 num and return average
#include<stdio.h>
#include<stdlib.h>

float Average(int iNo1, int iNo2, int iNo3)
{
    float fans = 0.0f;
    fans = ((float) iNo1 + (float)iNo2 + + (float)iNo2)/3;

    return fans;
}
int main()
{
    int ivalue1 = 0, ivalue2 = 0,  ivalue3 = 0; 
    float iresult = 0.0f;
   
    printf("Enter first number : \n");
    scanf("%d",&ivalue1);

    printf("Enter second number : \n");
    scanf("%d",&ivalue2);

    
    printf("Enter thired number : \n");
    scanf("%d",&ivalue3);

    iresult = Average(ivalue1, ivalue2, ivalue3);
    
    printf("Average is : %f\n",iresult);
    
    return EXIT_SUCCESS;
}