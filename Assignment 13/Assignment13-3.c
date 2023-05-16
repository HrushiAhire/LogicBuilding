#include<stdio.h>

int CalculateFees(int iStandard)
{
    int iFees = 0;
    switch (iStandard)
    {
    case 1:
        iFees = 8900;
        break;
    case 2:
        iFees = 12790;
        break;
    case 3:
        iFees = 21000;
        break;
    case 4:
        iFees = 23450;
        break;
    default:
        printf("Wrong Input\n");
        break;
    }
    return iFees;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter your standard\n");
    scanf("%d",&iValue);

    iRet = CalculateFees(iValue);
    printf("Fees : %d", iRet);
    return 0;
}