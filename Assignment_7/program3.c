#include<stdio.h>

int EvenFactor(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0,iMul = 1;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        
        if(iCnt % 2 == 0)
        {
            iMul = iMul * iCnt;

        }
       
    }
    return iMul;
}

int main()
{

    int iValue  = 0,iRet = 0;
    printf("Enter the number to find its even Factorial : ");
    scanf("%d",&iValue);

    iRet = EvenFactor(iValue);

    printf("The Even Factorial of %d is : %d",iValue,iRet);

    return 0;
}