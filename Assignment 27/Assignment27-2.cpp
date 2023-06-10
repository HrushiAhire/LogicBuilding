#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0X00000240;
    UINT iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return (iNo ^ iMask);
    }
    else
    {
        return iNo;
    }
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout<<"Please enter number"<<"\n";
    cin>>iValue;

    iRet = OffBit(iValue);

    cout<<"Modifed number is : "<<iRet<<"\n";
    
    return 0;
}