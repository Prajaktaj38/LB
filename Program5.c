/* 
    step 1 : understand the problem statement
    step 2 : write the algorithm
    step 3 : Decide the language
    step 4 : write the program
    step 5 : test the program
*/
/////////////////////////////////////////////////////////////////////////////////
//
// stap 1: Understand the problem statement
//        user is going to enter any 2 integers and we have to perform addition.

//
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
// step 2 : write the algorithm
/*
    start
        Accept First number as No1
        Accept second number as No2
        Create the variable as Ans to store the result
        Perform the addition and store into Ans
        Display the result from Ans
    End
*/    
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
//
// Step 3: Decide the programming language
//      We select C programming
//
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
//
// Step 4 : Write a program
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int ivalue1= 0 , ivalue2 = 0, iresult = 0;

    printf("Enter First nymber\n");
    scanf("%d",&ivalue1);

    printf("Enter second nymber\n");
    scanf("%d",&ivalue2);

    iresult = ivalue1 + ivalue2 ; //Business Logic 
    printf("Addition is : %d\n", iresult);

    return 0 ;
}