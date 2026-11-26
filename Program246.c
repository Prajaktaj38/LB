/*  
Inpute : Ganashe
Output : Print Count of a
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int Strlen(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str == 'A')
        {
            iCount++;
        }

       str++;
    }

    return iCount;
}

int main()
{   
    char Arr[100] = {'\0'};
    int iRet = 0;
    
    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);

    iRet = Strlen(Arr);

    printf("string length is : %d\n", iRet);

    return EXIT_SUCCESS;
}