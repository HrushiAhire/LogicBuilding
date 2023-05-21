#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChcekSpecialChar(char ch)
{
    if((ch >= 33 && ch <= 47) || (ch>=58 && ch<=64) || (ch>=91 && ch<=96) || (ch>=123 && ch<=126))
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

    bRet = ChcekSpecialChar(cValue);
    if(bRet == TRUE)
    {
        printf("%c is a special character\n",cValue);
    }
    else
    {
        printf("%c is not a special charatcer\n",cValue);
    }
    
    return 0;
}