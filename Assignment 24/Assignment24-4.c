#include <stdio.h>
#include<stdlib.h>

#define ERR_NOTFOUND -1

int Count(char *str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        iCount++;
        str++;
    }
    return iCount;
}

int LastOccurence(char *str,char ch)
{
    int iCount = Count(str);
    int iPos = 0;
    for(iPos=iCount; iPos>=0; iPos--)
    {
        if(str[iPos] ==ch)
        {
            break;
        }
    }
    return iPos;
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

    iRet = LastOccurence(arr,cValue);
    if(iRet == ERR_NOTFOUND)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("last occurence of elements is at index %d\n", iRet);
    }

    return 0;
}