#include<stdio.h>

int CountSmall(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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
    int iRet = 0;

    printf("Enter the string\n");
    scanf("%[^'\n']s",arr);

    iRet = CountSmall(arr);
    printf("Count of small letters in string is %d\n", iRet);

    return 0;
}