#include<stdio.h>

char Display(char ch)
{
    char toUpperCase = ch-32;
    char toLowerCase = ch+32;

    if(ch>=97 && ch<=122)
    {
        return toUpperCase;
    }
    else if(ch>=65 && ch<=90)
    {
        return toLowerCase;
    }
    else
    {
        return ch;
    }
}
int main()
{
    char cValue = 0;
    char cRet = 0;

    printf("Enter Character\n");
    scanf("%c", &cValue);

    cRet = Display(cValue);
    printf("Updated value character is : %c",cRet);
    return 0;
}