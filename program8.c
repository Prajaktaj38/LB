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

/////////////////////////////////////////////////////////////////////////////////
// 
// Function Name    :   Addition
// Input            :   Integer, Integer 
// Output           :   Integer
// Description      :   Performs Addition 
// Date             :   04/10/2026
// Author           :   Prajakta Pratap Jadhav  
// 
/////////////////////////////////////////////////////////////////////////////////

int Addition(int iNo1, int iNo2)
{ 
    int iAns = 0;
    iAns = iNo1 + iNo2; //Business logic
    return iAns;    
}

/////////////////////////////////////////////////////////////////////////////////
//
//Entery point of the application
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{ 
    int ivalue1 = 0, ivalue2 = 0, iresult = 0;
    printf("Enter First nymber\n");
    scanf("%d",&ivalue1);

    printf("Enter second nymber\n");
    scanf("%d",&ivalue2);
    iresult = Addition(ivalue1, ivalue2);    
  
    printf("Addition is : %d\n", iresult);

    return 0 ;
}

/////////////////////////////////////////////////////////////////////////////////
//  Step 5 : Test the program
//  Tested test cases 
//  --------------------------------------------------------
//  Input1      Input2      Output
//  10          11          21
//  11          10          21
//  11          0           11
//  0           11          11
//  20          -9          11
//  -9          20          11
//  -20         -11         -31
//  --------------------------------------------------------

/////////////////////////////////////////////////////////////////////////////////