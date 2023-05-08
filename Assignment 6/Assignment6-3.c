#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iAns = 1;
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        iAns = iAns * iCnt;
    }
    return iAns;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial of number is %d\n",iRet);
    return 0;
}