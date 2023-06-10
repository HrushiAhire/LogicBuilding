#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo, int iPos)
{
    UINT iResult = 0;
    UINT iMask = 0X00000001;

    if(iPos<1 || iPos>32)
    {
        cout<<"Invalid Position"<<"\n";
        return false;
    }

    iMask = iMask << (iPos-1);
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
    int iPos = 0;
    bool bRet = false;

    cout<<"Please enter number"<<"\n";
    cin>>iValue;

    cout<<"Please enter bit position(Range should be 1 to 32)"<<"\n";
    cin>>iPos;

    bRet = CheckBit(iValue, iPos);
    if(bRet == true)
    {
        cout<<"Bit is on at postion : "<<iPos<<"\n";
    }
    else
    {
        cout<<"Bit is off at position : "<<iPos<<"\n";
    }    
    return 0;
}