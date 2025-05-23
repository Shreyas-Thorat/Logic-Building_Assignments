#include<stdio.h>

int CountEven(int iNo)
{

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iDigit = 0, iCount =0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if(iDigit % 2 == 0)
        {
            iCount++; 
        }
    }
    return iCount;
}

int main()
{

    int iValue  = 0, iRet = 0;
    printf("Enter the value : ");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("The Number of Even Digits in %d are : %d",iValue,iRet);

    return 0;
}