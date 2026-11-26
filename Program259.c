/*  
C:\Users\Prajaktavg\OneDrive\Desktop\LB>Myexe
Enter string :
Pune4 maharashtra27
Friquency of Digits is : 3
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int CountDigits(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str >= '0'  &&  *str <= '9') 
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

    iRet = CountDigits(Arr);

    printf("Friquency of Digits is : %d\n", iRet);

    return EXIT_SUCCESS;
}