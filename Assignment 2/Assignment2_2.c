#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    while(iCnt<iNo)
    {
        printf("*");
        iCnt++;
    }
}
int main()
{
    int iValue = 0;

    printf("Please Enter Number : \n");
    scanf("%d", &iValue);

    Accept(iValue);
    return 0;
}