/*  
Inpute : Ganashe
Output : Print Count of vowels capital
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int Strlen(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str == 'A' || *str == 'E'||*str == 'I' || *str == 'O'|| *str == 'U' ||
                 *str == 'a' || *str == 'e'||*str == 'i' || *str == 'o'|| *str == 'u') 
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