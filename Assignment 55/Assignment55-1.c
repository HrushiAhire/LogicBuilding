#include<stdio.h>

int WhiteSpace(char *str)
{
    static int Count = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            Count++;
        }
        str++;
        WhiteSpace(str);
    }
    return Count;
}
int main()
{
    char str[20];
    int iRet = 0;

    printf("Enter the string\n");;
    scanf("%[^'\n']s", str);

    iRet = WhiteSpace(str);
    printf("Number of white spaces are : %d\n",iRet);
    return 0;
}