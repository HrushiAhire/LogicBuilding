/* Write a Program which checks whether 5th and 18th bit is ON or OFF */


#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 0X00020010;
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
        cout<<"5th and 18th Bit are ON"<<"\n";
    }
    else
    {
        cout<<"5th or 18th bit is OFF"<<"\n";
    }
    return 0;
}