#include<iostream>
using namespace std;

class Digit
{
    public:
        int iNo;

    Digit(int X)
    {
        iNo = X;
    }




};
 

int main()
{
    int iValue = 0;

    cout<<"Enter the Number : "<<"\n";
    cin>>iValue;

    Digit dobj(iValue);
  
    return 0;
}