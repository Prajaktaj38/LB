#include<stdio.h>

void  Maximum(int iNo1, int iNo2)
{
   
    bool b = false;

     if(iNo1 > iNo2)
    {
        printf("%d is maximum \n",iNo1);
        //return iNo1
    }
    else
    {
        printf("%d is maximum \n ",iNo2);

    }
    return bool;
}
int main()
{
    int ivalue1 = 0, ivalue2 = 0, iresult = 0;

    Maximum mobj = new Maximum();
    printf("Enter first number");
    scanf("%d",ivalue1);

    printf("Enter second number");
    scanf("%d",ivalue2);

    iresult = mobj.Maximum(ivalue1, ivalue2);
    
    return EXIT_SUCCESS;
}