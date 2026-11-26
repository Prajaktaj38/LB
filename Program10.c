#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ret = 0; 
    int no = 0;

    printf("Enter number : \n");
    ret = scanf("%d",&no);
    printf("Return value is : %d\n", ret);

    return EXIT_SUCCESS;
}

//Because scanf() returns the number of input items successfully assigned, not the actual number entered.
//- no = 10
//- ret = 1