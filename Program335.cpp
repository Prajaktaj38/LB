#include<iostream>
using namespace std;

int main()
{
    int *ptr = NULL;
    int iSize = 0, iCnt = 0;
    
    cout<<"Enter number of elements : \n";
    cin>>iSize;

    // Step1: Allocate the memory
    ptr = new int[iSize];

    //Step 2 : Use the memory
    cout<<"enter the elements: \n";
     for(iCnt = 0; iCnt < iSize; iCnt++)
    {
       cin>>ptr[iCnt];
    }

    cout<<"Elements of an arrays are: \n";
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<ptr[iCnt]<<endl;
    }    

    //Step 3 : Free the memory
    delete [] ptr;             // added missing  subscript operator

    return EXIT_SUCCESS;
}