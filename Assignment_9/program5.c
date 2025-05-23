#include<stdio.h>

int Count(int iNo)
{
    int iCount = 0; 
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iDigit = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if(iDigit < 6)
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

   iRet = Count(iValue);

   printf("The Number of Digits which are less than 6  in %d are : %d",iValue,iRet);

    return 0;
}