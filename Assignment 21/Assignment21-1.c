#include<stdio.h>

void DisplayASCII()
{
    unsigned char ch = 0;
    printf("Character\tDecimal\t\tOctal\t\tHexadecimal");
    for(ch = 0; ch<255; ch++)
    {
        printf("\n%c\t\t%d\t\t%o\t\t%x",ch,ch,ch,ch);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}