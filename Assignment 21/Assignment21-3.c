#include<stdio.h>

void Display(char ch)
{
    int iCnt =0;
    if(ch>=65 && ch<=90)
    {
        for(iCnt=ch; iCnt<=90; iCnt++)
        {
            printf("%c\t",iCnt);
        }
        printf("\n");
    }
    else if(ch>=97 && ch<=122)
    {
        for(iCnt=ch; iCnt>=97; iCnt--)
        {
            printf("%c\t",iCnt);
        }
        printf("\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c",&cValue);

    Display(cValue);
    return 0;
}