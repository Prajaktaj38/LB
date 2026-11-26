/*  
Enter string :
HELLO WORLD
Friquency of capital letters is : 10

C:\Users\Prajaktavg\OneDrive\Desktop\LB>Myexe
Enter string :
hello world
Friquency of capital letters is : 0
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int CountCapitalx(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str >= 'A'  &&  *str <= 'Z') 
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

    iRet = CountCapitalx(Arr);

    printf("Friquency of capital letters is : %d\n", iRet);

    return EXIT_SUCCESS;
}