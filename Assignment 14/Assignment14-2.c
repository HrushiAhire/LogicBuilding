#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt>=1; iCnt--)
    {
        printf("%d\t#\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iFrequency = 0;

    printf("Enter Number of Elements:\n");
    scanf("%d",&iFrequency);

    Display(iFrequency);

    return 0;
}