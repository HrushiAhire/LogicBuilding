#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCount = 0;
    int iSumEvent = 0;
    int iSumOdd = 0;

    for(iCount = 0; iCount<iLength; iCount++)
    {
        if((Arr[iCount]%2) == 0)
        {
            iSumEvent = iSumEvent + Arr[iCount];
        }
        else
        {
            iSumOdd = iSumOdd + Arr[iCount];
        }
    }
    return(iSumEvent - iSumOdd);
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iRet = 0;
    int *ptr = NULL;

    printf("Enter the number of elements\n");
    scanf("%d",&iSize);

    ptr = malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate the Memory\n");
        return -1;
    }

    printf("Enter %d elements\n", iSize);

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("Enter element %d : ", iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Difference(ptr, iSize);
    printf("Result is %d",iRet);

    free(ptr);
    return 0;
}