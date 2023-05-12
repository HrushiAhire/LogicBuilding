#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength, int iNo)
{
    int iCount=0;
    bool bFlag = false;
    for(iCount - 0; iCount<iLength; iCount++)
    {
        if(Arr[iCount] == iNo)
        {
            bFlag = true;
            break;
        }
        else
        {
            bFlag = false;
        }
    }
    return bFlag;
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *ptr = NULL;
    int iValue = 0;
    bool bRet = 0;

    printf("Enter number of elements\n");
    scanf("%d", &iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter %d elements\n", iSize);
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("Enter element %d : ", iCnt+1);
        scanf("%d", &ptr[iCnt]);
    }

    printf("Enter number which you want to check\n");
    scanf("%d", &iValue);
    
    bRet = Check(ptr, iSize, iValue);
    if(bRet == true)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }


    return 0;
}