/*
    Bitwise 
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int No1 = 0XAD56;
    int No2 = 0XFD77;   
    int Ans = 0;

    Ans = No1 & No2;
    Ans = No1 | No2;

    printf("%d\n", Ans);     //-15

    return EXIT_SUCCESS;
}