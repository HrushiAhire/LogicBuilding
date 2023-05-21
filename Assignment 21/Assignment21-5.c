#include<stdio.h>

void Display(char ch)
{
    printf("Decimal Value : %d\n",ch);
    printf("Octal Value : %o\n",ch);
    printf("Hexadecimal Value : %x\n",ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c",&cValue);

    Display(cValue);
    return 0;
}