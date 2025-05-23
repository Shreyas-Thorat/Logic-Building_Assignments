#include<stdio.h>

int OddFactor(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0,iMul1 = 1,iMul2 = 1;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        
        if(iCnt % 2 == 0)
        {
            iMul1 = iMul1 * iCnt;

        }
        else
        {
            iMul2  = iMul2 * iCnt;
        }
       
    }
    return iMul1 - iMul2;
}

int main()
{

    int iValue  = 0,iRet = 0;
    printf("Enter the number  : ");
    scanf("%d",&iValue);

    iRet = OddFactor(iValue);

    printf("The Difference of Evan and odd Factorial of %d is : %d",iValue,iRet);

    return 0;
}