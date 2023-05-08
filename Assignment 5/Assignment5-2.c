#include<stdio.h>

void DisplayNumbers(int iNo1)
{
    int iCnt = 0;
    for(iCnt=1; iCnt<=iNo1; iCnt++)
    {
        printf("%d ",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d", &iValue);

    DisplayNumbers(iValue);
    return 0;
}