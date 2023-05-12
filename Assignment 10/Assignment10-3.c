#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Frequency(int Arr[], int iLength)
{
    int iCount = 0;
    int iCountEven = 0;
    int iCountOdd = 0;
    int bFlag = false;

    for(iCount=0; iCount<iLength; iCount++)
    {
        if(Arr[iCount]==11)
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
    bool bRet = 0;

    printf("Enter Number of Elements\n");
    scanf("%d", &iSize);

    ptr = (int *)malloc(iSize * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter %d elements\n", iSize);
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("Enter Element %d : ", iCnt+1);
        scanf("%d", &ptr[iCnt]);
    }

    bRet = Frequency(ptr, iSize);
    if(bRet == true)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }
    free(ptr);

    return 0;

}