#include<iostream>
using namespace std;

class Number
{
    public:
        int *Arr;
        int iLength;

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


};

int main()
{
    // Step 1 : Allocate the memory
    Number *number1 = new Number(5);
    Number *number2 = new Number(7);

    //step 2 :  Use the memory
    
    // Step 3 : Deallocate the memory
    delete number1;
    delete number2;


    return EXIT_SUCCESS;
}