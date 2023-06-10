/* Write a program which checks whether first and last bit is on or off. i.e 1st and 32nd bit */


#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 0X80000001;
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
    UINT iValue = 0;
    bool bRet = false;

    cout<<"Please enter number"<<"\n";
    cin>>iValue;

    bRet = CheckBit(iValue);
    if(bRet == true)
    {
        cout<<"First and last Bit are ON"<<"\n";
    }
    else
    {
        cout<<"First or last Bit is OFF"<<"\n";
    }
    return 0;
}