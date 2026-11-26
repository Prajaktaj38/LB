/*  
Inpute : Gan as he
Output : Whitespace
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int Strlen(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str == 97 || *str == 98 || *str == 99 || *str == 100) 
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