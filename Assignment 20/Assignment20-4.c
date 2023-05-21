#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChcekLowerCase(char ch)
{
    if(ch >= 97 && ch <= 122)
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

    bRet = ChcekLowerCase(cValue);
    if(bRet == TRUE)
    {
        printf("%c is a Small Case Character\n",cValue);
    }
    else
    {
        printf("%c is not a Small Case Character\n",cValue);
    }
    
    return 0;
}