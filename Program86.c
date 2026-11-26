/*
    ----------------------------------------------
                    Operation ||
    ----------------------------------------------
    Resultt1        Reaultt2        Finl Result
    ------------------------------------------------
    True            True                True //SC - short circuit
    True            False               True //Sc - short circuit
    False           True                True
    False           False               False
    -----------------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if( (iNo % 3 == 0) || (iNo % 5 == 0) )
    {
        printf("It is Divisible\n");
    }
    else
    {
        printf("It is not Divisible\n");
    }      
}

int main()
{
    int iValue = 0;   

    printf("Enter the Number:\n");
    scanf("%d", &iValue);

    CheckDivisible(iValue); 

    return EXIT_SUCCESS;
}