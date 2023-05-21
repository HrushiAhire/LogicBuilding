#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char *str)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u'||*str=='A'||*str=='E'||*str=='I'||*str=='O'||*str=='U')
        {
            bFlag = true;
            break;
        }
        str++;
    }
    return bFlag;
}

int main()
{
    char arr[20];
    bool bRet = 0;

    printf("Enter the string\n");
    scanf("%[^'\n']s",arr);

    bRet = CheckVowel(arr);

    if(bRet == true)
    {
        printf("Contains Vowel\n");
    }
    else
    {
        printf("There is no vowel\n");
    }

    return 0;
}