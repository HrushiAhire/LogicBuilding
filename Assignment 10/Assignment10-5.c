#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCount = 0;
    int iCountNo = 0;

    for(iCount=0; iCount<iLength; iCount++)
    {
        if(Arr[iCount]==iNo)
        {
            iCountNo++;
        }
        
    }
    return iCountNo;
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;
    int iValue = 0;

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

    printf("Enter the number whose frequency you want to count\n");
    scanf("%d", &iValue);

    iRet = Frequency(ptr, iSize, iValue);
    printf("Frequency is %d\n", iRet);
    free(ptr);

    return 0;

}