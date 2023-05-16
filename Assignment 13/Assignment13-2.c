#include<stdio.h>

float CalculateTax(int iIncome)
{
    float fPercent = 0.0f;
    float fTax = 0.0f;
    if(iIncome<500000)
    {
        fTax = 0.0f;
    }
    else if(iIncome>=500000 && iIncome<1000000)
    {
        fTax = fTax + 0.10*(iIncome - 500000);
    }
    else if(iIncome>=1000000 && iIncome<2000000)
    {
        fTax = fTax + 50000 + 0.20*(iIncome - 1000000);
    }
    else
    {
        fTax = fTax + 50000 + 200000 + 0.30*(iIncome - 2000000);
    }
    return fTax;
}

int main()
{
    int iValue = 0;
    int fRet = 0;

    printf("Enter total bill amount\n");
    scanf("%d",&iValue);

    fRet = CalculateTax(iValue);
    printf("Tax to be paid is : %d", fRet);
    return 0;
}