#include<stdio.h>

int MulDigits(int iNo)
{

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iDigit = 0, iMult = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        iMult = iDigit * iMult ;

        
    }
    return iMult;
}

int main()
{

    int iValue  = 0, iRet = 0;
    printf("Enter the value : ");
    scanf("%d",&iValue);

    iRet = MulDigits(iValue);

    printf("The Multiplication of the given Digits are : %d",iRet);

    return 0;
}