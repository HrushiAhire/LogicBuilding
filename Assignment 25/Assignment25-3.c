#include<stdio.h>

void Pattern(int iRow, int iColumn)
{
    int i = 0, j = 0;

    if(iRow != iColumn)
    {
        printf("Invalid input\n");
        return;
    }

    for(i = iRow; i >= 1; i--)
    {
        for(j = 1; j <= iColumn; j++)
        {
            if(i==j || i==1 || j==1 || i==iRow || j==iColumn)
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns\n");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}