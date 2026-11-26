/*  
C:\Users\Prajaktavg\OneDrive\Desktop\LB>Myexe
Enter string :
Demo# Pune% Java$
Friquency of Special charactors is : 3
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int CountSpecialsx(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str == '$' || *str == '#' || *str == '*' || *str == '&' || *str == '%') 
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

    iRet = CountSpecialsx(Arr);

    printf("Friquency of Special charactors is : %d\n", iRet);

    return EXIT_SUCCESS;
}