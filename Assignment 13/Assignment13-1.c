#include<stdio.h>

float CalculateBill(int iAmount)
{
    float fPercent = 0.0f;
    float fBill = 0.0f;
    if(iAmount<500)
    {
        fPercent = 0.0f;
    }
    else if(iAmount>=500 && iAmount<1500)
    {
        fPercent = 10.0f;
    }
    else
    {
        fPercent = 15.0f;
    }
    fBill = (float)iAmount - ((float)fPercent / 100)*(float)iAmount;
    return fBill;
}

int main()
{
    int iValue = 0;
    int fRet = 0;

    printf("Enter total bill amount\n");
    scanf("%d",&iValue);

    fRet = CalculateBill(iValue);
    printf("Discounted Bill Amount is : %d", fRet);
    return 0;
}