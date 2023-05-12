#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int iCount = 0;
    int iMult = 1;
    
    for(iCount=0; iCount<iLength; iCount++)
    {
       if((Arr[iCount]%2) != 0)
       {
        iMult = Arr[iCount] * iMult;
       }
    }
    return iMult;
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

    iRet = Product(ptr, iSize);
    printf("Multiplication is %d", iRet);
    free(ptr);

    return 0;

}