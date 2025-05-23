#include<stdio.h>

int CountRange(int iNo)
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

        if(iDigit > 3 && iDigit < 7)
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

    iRet = CountRange(iValue);

    printf("The Number of Digits in range of 3 to 7 are : %d",iRet);

    return 0;
}