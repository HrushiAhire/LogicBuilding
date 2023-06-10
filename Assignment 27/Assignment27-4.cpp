#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0X00000240;
    UINT iResult = 0;

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout<<"Please enter number"<<"\n";
    cin>>iValue;

    iRet = ToggleBit(iValue);

    cout<<"Modifed number is : "<<iRet<<"\n";
    
    return 0;
}