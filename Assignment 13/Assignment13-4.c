#include<stdio.h>

int TouristBill(int iKM)
{
    int iRent = 0;
    if(iKM < 100)
    {
        iRent = iKM * 25;
    }
    if(iKM >= 100)
    {
        iRent = 2500 + (iKM-100)*15;
    }
    return iRent;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of kilometers\n");
    scanf("%d", &iValue);

    iRet = TouristBill(iValue);
    printf("Your Bill amount is : %d",iRet);

    return 0;
}