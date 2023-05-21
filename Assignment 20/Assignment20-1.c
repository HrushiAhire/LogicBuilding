#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChcekAlphabet(char ch)
{
    if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
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

    bRet = ChcekAlphabet(cValue);
    if(bRet == TRUE)
    {
        printf("%c is alphabet\n",cValue);
    }
    else
    {
        printf("%c is not alphabet\n",cValue);
    }
    
    return 0;
}