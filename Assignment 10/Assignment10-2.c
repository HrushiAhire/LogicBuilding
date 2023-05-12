#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCount = 0;
    int iCountEven = 0;
    int iCountOdd = 0;

    for(iCount=0; iCount<iLength; iCount++)
    {
        if((Arr[iCount]%2)==0)
        {
            iCountEven++;
        }
        else
        {
            iCountOdd++;
        }
    }
    return (iCountEven-iCountOdd);
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

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

    iRet = Frequency(ptr, iSize);
    printf("Difference is %d", iRet);
    free(ptr);

    return 0;

}