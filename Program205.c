//Inpute : 4
//Output : 1A 2B 3C 4D

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char ch = '\0';  

    for (iCnt = 1, ch = 'a'; iCnt <= iNo; iCnt++, ch++)
    {
        printf("%d\t", iCnt);
        printf("%c\t", ch);        
    }

    printf("\n");
}

int main()
 { 
    int iValue = 0;
    
    printf("Enter the value : \n");
    scanf("%d", &iValue);

    Pattern(iValue);
    return EXIT_SUCCESS;
 }