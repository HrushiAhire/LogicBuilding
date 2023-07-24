#include<stdio.h>

int Reverse(int iNo)
{
    int iDigit = 0;
    static int iReverse = 0;
    if(iNo != 0)
    {
        iDigit = iNo%10;
        iReverse = (iReverse *10) + iDigit;
        iNo = iNo/10;
        Reverse(iNo);
    }
    return iReverse;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = Reverse(iValue);
    printf("Reversed number is : %d\n",iRet);

    return 0;
}