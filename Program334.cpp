#include<iostream>
using namespace std;

int main()
{
    int *ptr = NULL;
    int iSize = 0;
    
    cout<<"Enter number of elements : \n";
    cin>>iSize;

    // Step1: Allocate the memory
    ptr = new int[iSize];

    //Step 2 : Use the memory
    

    //Step 3 : Free the memory
    delete [] ptr;             // added missing operator

    return EXIT_SUCCESS;
}