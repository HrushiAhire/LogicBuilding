#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iCount  = 0;
    int iCountEven = 0;

    for(iCount=0; iCount<iLength; iCount++)
    {
        if((Arr[iCount]%2) == 0)
        {
            iCountEven++;
        }
    }
    return iCountEven;
}

int main()
{
    int iSize = 0, iRet = 0;
    int iCnt = 0;
    int *ptr = NULL;

    printf("Enter Number of Elements\n");
    scanf("%d", &iSize);

    ptr = malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements\n", iSize);

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("Enter element %d : ", iCnt+1);
        scanf("%d", &ptr[iCnt]);
    }

    iRet = CountEven(ptr, iSize);
    printf("Count of Even Numbers is %d",iRet);

    free(ptr);

    return 0;
}