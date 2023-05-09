#include<stdio.h>
#include<stdbool.h>

bool CheckZero(int iNo)
{
    int iDigit = 0;
    bool bFlag = false;
    while(iNo != 0)
    {
        iDigit = iNo%10;
        if(iDigit == 0)
        {
            bFlag = true;
            break;
        }
        iNo = iNo/10;
    }
    return bFlag;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet == true)
    {
        printf("It Contains Zero\n");
    }
    else
    {
        printf("There is no zero");
    }

    return 0;
}