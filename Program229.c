#include<stdio.h>
#include<stdlib.h>

int main()
{
     // pune will be stored inn memory but not display.
    char Arr[100] = {'G', 'a','n', 'e', 's', 'h', '\0', 'p', 'u', 'n', 'e'};

    printf("%s\n", Arr);
    
    printf("size of Arry is : %d\n", sizeof(Arr));
    
    return EXIT_SUCCESS;
}