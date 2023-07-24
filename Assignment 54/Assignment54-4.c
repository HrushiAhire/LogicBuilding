#include<stdio.h>

int Factorial(int iNo)
{
    static int iFact = 1;
    static int iCnt = 1;
    if(iCnt <= iNo)
    {
        iFact = iFact * iCnt;
        iCnt++;
        Factorial(iNo);
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial of number is : %d\n", iRet);

    return 0;
}