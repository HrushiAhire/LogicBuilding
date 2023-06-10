#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    UINT iMask = 0X0000000F;
    UINT iResult = 0;

    iResult = iNo | iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout<<"Please enter number"<<"\n";
    cin>>iValue;

    iRet = OnBit(iValue);

    cout<<"Modifed number is : "<<iRet<<"\n";
    
    return 0;
}