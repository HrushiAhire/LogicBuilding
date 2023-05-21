#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if(chDiv == 65 || chDiv == 97)
    {
        printf("Your exam is at 7 AM\n");
    }
    else if(chDiv == 66 || chDiv == 98)
    {
        printf("Your exam is at 8.30 AM\n");       
    }
    else if(chDiv == 67 || chDiv == 99)
    {
        printf("Your exam is at 9.20 AM\n");       
    }
    else if(chDiv == 68 || chDiv == 100)
    {
        printf("Your exam is at 10.30 AM\n");       
    }
    else
    {
        printf("Please enter valid input\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Your Division\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);
    
    return 0;
}