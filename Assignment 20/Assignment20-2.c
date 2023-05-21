#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChcekCapital(char ch)
{
    if(ch >= 65 && ch <= 90)
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

    bRet = ChcekCapital(cValue);
    if(bRet == TRUE)
    {
        printf("%c is Capital Letter\n",cValue);
    }
    else
    {
        printf("%c is not Capital Letter\n",cValue);
    }
    
    return 0;
}