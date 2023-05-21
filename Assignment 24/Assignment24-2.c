#include <stdio.h>
#include<stdlib.h>

int CheckFreq(char *str, char ch)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            iCount++;
        }
        str++;
    }
    return iCount;
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
    printf("Frequency of character is : %d\n", iRet);

    return 0;
}