/* Write a program which accepts one number from user and off 7th bit of that number 
if it is on. Return Modified number */

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0X00000040;
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