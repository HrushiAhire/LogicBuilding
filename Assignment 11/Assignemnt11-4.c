#include<stdio.h>
#include<stdlib.h>

int Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCount = 0;
    int iTemp = 0;

    for(iCount=iLength-1; iCount>=0; iCount--)
    {
        if(Arr[iCount] > iStart && Arr[iCount]<iEnd )
        {
            printf("%d\n", Arr[iCount]);
        }
    }
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Elements\n");
    scanf("%d", &iSize);

    printf("Enter the starting point :\n");
    scanf("%d", &iValue1);

    printf("Enter the ending point :\n");
    scanf("%d", &iValue2);

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

    Range(ptr, iSize, iValue1, iValue2);
    
    free(ptr);

    return 0;

}