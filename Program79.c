//input = 5, if input = 8 o/p = 1+2+3+4+5+6+7+8 = 36
//output 15

#include<stdio.h>
#include<stdlib.h>

int iCnt  = 0;
int iSum = 0;

iCnt = 1;

//iSum = 0+1  --> 1
iSum = iSum + iCnt;
iCnt++;         //2

//iSum = 1+2  --> 2
iSum = iSum + iCnt;
iCnt++; //3

//iSum = 3+1  --> 4
iSum = iSum + iCnt;
iCnt++; //3

//iSum = 3+3  --> 4
iSum = iSum + iCnt;
iCnt++; 4

//iSum = 1+2  --> 2
iSum = iSum + iCnt;
iCnt++; //3
//iSum = 1+2  --> 2
iSum = iSum + iCnt;
iCnt++; //3


int main()
{
   

    return EXIT_SUCCESS;
}