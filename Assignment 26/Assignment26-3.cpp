/* Write a Program which checks whether 7th, 15th, 21st & 28th bit is ON or OFF */


#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 0X08104040;
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
        cout<<"7th, 15th, 21th and 28th Bit are ON"<<"\n";
    }
    else
    {
        cout<<"7th, 15th, 21th or 28th Bit is OFF"<<"\n";
    }
    return 0;
}