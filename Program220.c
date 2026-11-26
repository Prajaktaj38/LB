/*

//Inpute : 4, 4
//Output : 
    A       B       C       D
    A       B       C       D
    A       B       C       D
    A       B       C       D
*/



/*
    iRow =4, iCol = 4
     Time complexity = O(2N^2)
*/
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1; i<= iRow; i++)
    {        
        for(j = 1, ch = 'A'; j <= iCol; j++, ch++)
        {
            printf("%c\t", ch);       
        }
        printf("\n\n");
    }
}

int main()
 {
    int  iValue1 = 0, iValue2 = 0;
    printf("Enter number of rows : \n");
    scanf("%d", &iValue1);

    printf("Enter number of columns : \n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
 }