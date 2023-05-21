#include <stdio.h>
#include<stdlib.h>

#define ERR_NOTFOUND -1

int CheckFreq(char *str, char ch)
{
    int iPos = 0;

    while (*str != '\0')
    {
        if(*str != ch)
        {
            iPos++;
        }
        else if(*str == ch)
        {
            break;
        }
        str++;
    }
    if(*str == '\0')
    {
        return ERR_NOTFOUND;
    }
    else
    {
        return iPos;
    }
}

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter your string\n");
    scanf("%[^'\n']s", arr);

    fflush(stdin);

    printf("Enter the character\n");
    scanf("%c", &cValue);

    iRet = CheckFreq(arr,cValue);
    if(iRet == ERR_NOTFOUND)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("First occurence of elements is at index %d\n", iRet);
    }

    return 0;
}