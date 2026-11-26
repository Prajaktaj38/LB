#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char Arr[10] = "Ganesh";

    char *ptr = NULL;
    ptr = &(Arr[0]);

    printf("%c", *ptr);
    ptr++;

    printf("%c", *ptr);
    ptr++;

    printf("%c", *ptr);
    ptr++;

    printf("%c", *ptr);
    ptr++;
        
    return EXIT_SUCCESS;
}

/*
Enter string :
Pune maharashtra India
Entered string is : Pune maharashtra India
*/