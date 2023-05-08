#include<stdio.h>

void Tabel(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    for(iCnt=1 ; iCnt<=10; iCnt++)
    {
        iMult = iNo * iCnt;
        printf("%d ", iMult);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d", &iValue);

    Tabel(iValue);
    return 0;
}