#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChcekDigit(char ch)
{
    if(ch >= 48 && ch <= 57)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character\n");
    scanf("%c",&cValue);

    bRet = ChcekDigit(cValue);
    if(bRet == TRUE)
    {
        printf("%c is a Digit\n",cValue);
    }
    else
    {
        printf("%c is not a Digit\n",cValue);
    }
    
    return 0;
}