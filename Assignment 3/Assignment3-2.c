#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt=(iNo/2); iCnt>=1; iCnt--)
    {
        if((iNo%iCnt) == 0)
        {
            printf("%d ",iCnt);
        }
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter Number\n");
    scanf("%d", &ivalue);

    FactRev(ivalue);

    return 0;
}