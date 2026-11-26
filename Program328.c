#include<stdio.h>
#include<stdlib.h>

int Summetion(int Arr[], int iLength)
{
    int iCnt = 0;
    int iSum = 0; 

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        //iSum = Arr[iCnt] +iSum;
        iSum = iSum + Arr[iCnt];    
    }
    return iSum;
}

float Average(int Arr[], int iLength)
{
    int iCnt = 0;
    int iSum = 0; 

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        //iSum = Arr[iCnt] +iSum;
        iSum = iSum + Arr[iCnt];    
    }
    return (iSum/iLength);
}

int main()
{  
    int * ptr = NULL;
    int iSize = 0, iCnt = 0;
    int iRet = 0;
    float fRate = 0.0f;

    printf("Enter number of elements you want : \n");
    scanf("%d", &iSize);

    //Step 1 : Allocate the memory
    ptr = (int * ) malloc(sizeof(int) * iSize);

    //Step 2 : Use the memory
    printf("Enter the elements: \n");
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = Summetion(ptr, iSize);
    printf("Summetion of all elements: %d\n", iRet);

    fRate = Average(ptr, iSize);
    printf("Average of all elements: %d\n", fRate);

    //Step 3: Free the memory
    free(ptr);
    
    return EXIT_SUCCESS;
}