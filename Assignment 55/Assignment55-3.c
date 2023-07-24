#include<stdio.h>

int CountSmall(char *str)
{
    static int Count = 0;

    if(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            Count++;
        }
        str++;
        CountSmall(str);
    }
    return Count;
}
int main()
{
    char str[20];
    int iRet = 0;

    printf("Enter the string\n");;
    scanf("%[^'\n']s", str);

    iRet = CountSmall(str);
    printf("Number of small case characters are : %d\n",iRet);
    return 0;
}