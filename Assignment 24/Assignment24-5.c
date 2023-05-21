#include<stdio.h>

int strlenX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        iCount++;
        str++;
    }
    return iCount;
}

void Reverse(char str[])
{
    int iLength = strlenX(str);
    char temp = '\0';

    for(int i=0; i<iLength/2; i++)
    {
        temp = str[i];
        str[i] = str[iLength-i-1];
        str[iLength-i-1] = temp;
    }

}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the string\n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    printf("Modified string is : %s\n",arr);

    return 0;
}