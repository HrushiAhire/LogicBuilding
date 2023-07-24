#include<stdio.h>

int strlenX(char *str)
{
    static int Count  = 0;

    if(*str != '\0')
    {
        Count++;
        str++;
        strlenX(str);
    }
    return Count;
}
int main()
{
    int iRet = 0;
    char str[20];

    printf("Enter the string : \n");
    scanf("%[^'\n']s", str);

    iRet = strlenX(str);
    printf("Number of characters in string are : %d",iRet);
    
    return 0;
}