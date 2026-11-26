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

void CountFrequencyX(char *str)
{
    int iCountSmall = 0, iCountCapital = 0, iCountDigits = 0;

    while (*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCountSmall++;
        }      
        else if(*str >= 'A' && *str == 'Z')
        {
            iCountCapital++;
        }       
        else if(*str >= '0' && *str == '9')
        {
            iCountDigits++;
        }
        
        printf("Frequency of small letters is : %d\n", iCountSmall);
        printf("Frequency of capital letters is : %d\n", iCountCapital);
        printf("Frequency of Digits is : %d\n", iCountDigits);       
    }
    
  
}

int main()
{   
    char Arr[100] = {'\0'};
    //int iRet = 0;
    
    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);

   CountFrequencyX(Arr);

   // printf("Friquency of Special charactors is : %d\n", iRet);

    return EXIT_SUCCESS;
}