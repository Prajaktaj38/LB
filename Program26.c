#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sname[30];

    printf("Enter your name :  \n");
    scanf("%[^'\n']s",sname);       //special scanf to accept the input until enter (accept the input after space)

    printf("Welcome %s\n",sname);
    return EXIT_SUCCESS;
}