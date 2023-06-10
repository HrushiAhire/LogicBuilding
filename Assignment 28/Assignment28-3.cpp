#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OnBit(UINT iNo, int iPos)
{
    UINT iResult = 0;
    UINT iMask = 0X00000001;

    if(iPos<1 || iPos>32)
    {
        cout<<"Invalid Position"<<"\n";
        return false;
    }

    iMask = iMask << (iPos-1);
    iResult = iNo | iMask;

    return iResult;

}

int main()
{
    UINT iValue = 0;
    int iPos = 0;
    UINT iRet = 0;

    cout<<"Please enter number"<<"\n";
    cin>>iValue;

    cout<<"Please enter bit position(Range should be 1 to 32)"<<"\n";
    cin>>iPos;

    iRet = OnBit(iValue, iPos);
    cout<<"Modified number is : "<<iRet<<"\n";    
    return 0;
}