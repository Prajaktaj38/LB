#include<iostream>
using namespace std;

int Summetion(int Arr[], int iLength)
{
    int iCnt = 0;
    int iSum = 0; 

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        //iSum = Arr[iCnt] +iSum;
        iSum = iSum + Arr[iCnt];    
    }
    return iSum;
}

float Average(int Arr[], int iLength)
{
    int iCnt = 0;
    int iSum = 0; 

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        //iSum = Arr[iCnt] +iSum;
        iSum = iSum + Arr[iCnt];    
    }
    return ((float)iSum/(float)iLength);
}

int main()
{
    int *ptr = NULL;
    int iSize = 0, iCnt = 0;
    int iRet = 0;
    float fRet = 0;
    
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
    
    iRet = Summetion(ptr, iSize);
    cout<<"Addition is : "<<iRet<<endl;

    fRet = Average(ptr, iSize);
    cout<<"Average is : "<<fRet<<endl;

    //Step 3 : Free the memory
    delete [] ptr;             // added missing  subscript operator

    return EXIT_SUCCESS;
}