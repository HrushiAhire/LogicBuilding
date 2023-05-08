#include<stdio.h>

float Percentage(int iNo1, int iNo2)
{
    float iResult = 0.0f;
    iResult = (iNo2*100)/iNo1;
    return iResult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Enter the Total Marks\n");
    scanf("%d",&iValue1);

    printf("Enter the Obtained Marks\n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);
    printf("Percentage value : %f",fRet);

    return 0;
}