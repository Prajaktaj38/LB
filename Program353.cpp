#include<iostream>
using namespace std;

class Number
{
    private:
        int *Arr;
        int iLength;

    public:    
        Number(int iSize)
        {
            cout<<"Inside the constructor";
            this ->iLength = iSize;
            this -> Arr = new int[iLength];
        }

        ~ Number()
        {
            cout<<"Inside the destructor";
            delete [] this->Arr;
        }

        void Accept()
        {
            int iCnt = 0;
            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                cin>> Arr[iCnt];
            }

            cout<<"Enter the elements : \n";
        }

        void Display()
        {
            int iCnt = 0;

            cout<<"Elements of the Array are : \n";
             
            for(iCnt = 0; iCnt < iLength; iCnt++)
            {
                cin>> Arr[iCnt];
            }
            
            cout<<"Enter the elements : \n";
        }
};

int main()
{
    int iSize = 0;

    cout<<"Enter number of Elements : \n";
    cin>>iSize;
    // Step 1 : Allocate the memory
    Number *number1 = new Number(5);


    //step 2 :  Use the memory
    number1 ->Accept();
    number1->Display();
    
    // Step 3 : Deallocate the memory
    delete number1;

    return EXIT_SUCCESS;
}