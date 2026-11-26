#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sname[30];
    int iAge = 0;
    float iMarks = 0.0f;

    printf("Enter your name :  \n");
    scanf("%[^'\n']s",sname);       //Enter remains in input buffer

    printf("Enter your Age : \n");
    scanf(" %d",&iAge);             //Space Added

    printf("Enter your Marks : \n");
    scanf("%f",&iMarks);

    printf("Welcome %s\n",sname);
    printf("Your age is : %d\n",iAge);
    printf("Your Marks : %f\n", iMarks);
    return EXIT_SUCCESS;

}