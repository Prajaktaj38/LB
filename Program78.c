//input = 10 
//output 1,3,5,7,9


#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt += 2)// Best code
    {    
        printf("%d\t", iCnt);
        //iCnt++; // worst logic
    }

    printf("\n");
       
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency:\n");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}