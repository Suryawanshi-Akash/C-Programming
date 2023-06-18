#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 0X40;
    UINT iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }

}


int main()
{
    int iValue1 =0;
    bool bRet = false;

    cout<<"Enter first number "<<"\n";
    cin>>iValue1;


    bRet = CheckBit(iValue1);

    if(bRet == true)
    {
        cout<<"7th bit is ON"<<"\n";
    }
    else
    {
        cout<<"7th bit is OFF"<<"\n";
    }


    return 0;
}