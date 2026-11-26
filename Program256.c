/*  
Inpute : Gan as he
Enter string :
HELLO world
Friquency of small letters is : 5


Enter string :
HELLO WORLD
Friquency of small letters is : 0

C:\Users\Prajaktavg\OneDrive\Desktop\LB>Myexe
Enter string :
hello world
Friquency of small letters is : 10
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int CountSmallx(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str >= 97  &&  *str <= 122) 
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

    iRet = CountSmallx(Arr);

    printf("Friquency of small letters is : %d\n", iRet);

    return EXIT_SUCCESS;
}