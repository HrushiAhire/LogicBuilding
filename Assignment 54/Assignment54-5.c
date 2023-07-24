#include<stdio.h>

int Product(int iNo)
{
    static int iProduct = 1;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo%10;
        if(iDigit == 0)
        {
            iDigit = 1;
        }
        iProduct = iProduct * iDigit;
        iNo = iNo/10;
        Product(iNo);
    }
    return iProduct;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = Product(iValue);
    printf("Product of Digits is : %d\n",iRet);
    return 0;
}