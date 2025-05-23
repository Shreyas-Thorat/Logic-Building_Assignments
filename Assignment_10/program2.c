#include<stdio.h>

int CountOdd(int iNo)
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

        if(iDigit % 2 != 0)
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

    iRet = CountOdd(iValue);

    printf("The Number of Odd Digits in %d are : %d",iValue,iRet);

    return 0;
}