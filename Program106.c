#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Checkperfect(int iNo)
{
    int iCnt = 0, isum = 0;

   
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt )== 0)
        {
            isum = isum + iCnt;
        }
    } 

    return(isum == iNo) ;
}

int main()
{
    int iValue = 0; 
    bool bret = false; 

    printf("Enter the Number:\n");
    scanf("%d", &iValue); 
    bret=Checkperfect(iValue);   
    if(bret == true)
    {
        printf("it is perfect number");
    }
    else
    {
        printf("it is not a perfect number");
    }
        
    return EXIT_SUCCESS;
}

//Time complexity : O(N/2)