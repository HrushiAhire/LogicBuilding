    #include<stdio.h>
    #include<stdbool.h>
    #include<stdlib.h>

    bool CheckChar(char *str, char ch)
    {
        bool bFlag = false;

        while (*str != '\0')
        {
            if(*str == ch)
            {
                bFlag = true;
            }
            str++;
        }
        return bFlag;
    }

    int main()
    {
        char arr[20];
        char cValue = '\0';
        bool bRet = false;

        printf("Enter your string\n");
        scanf("%[^'\n']s",arr);
        
        fflush(stdin);

        printf("Enter the character\n");
        scanf("%c",&cValue);

        bRet = CheckChar(arr,cValue);
        if(bRet == true)
        {
            printf("Character found\n");
        }
        else
        {
            printf("Character not found\n");
        }

        return 0;
    }