#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char Arr[100];

    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);     // special scanf
    
    printf("Entered string is : %s\n", Arr);
        
    return EXIT_SUCCESS;
}

/*
Enter string :
Pune maharashtra India
Entered string is : Pune maharashtra India
*/