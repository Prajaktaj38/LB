
//Accept 2 num and return average
#include<stdio.h>
#include<stdlib.h>

float Average(int iNo1, int iNo2)
{
    float fans = 0.0f;
    fans = (iNo1 + iNo2)/2;

    return fans;
}
int main()
{
    int ivalue1 = 0, ivalue2 = 0; 
    float iresult = 0.0f;
   
    printf("Enter first number : \n");
    scanf("%d",ivalue1);

    printf("Enter second number : \n");
    scanf("%d",ivalue2);

    iresult = Average(ivalue1, ivalue2);
    
    printf("Average is : %f\n",iresult);
    
    return EXIT_SUCCESS;
}