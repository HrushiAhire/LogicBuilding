#include<stdio.h>
#include<stdbool.h>

void DisplayOddNumbers(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d ", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    DisplayOddNumbers(iValue);
    return 0;
}