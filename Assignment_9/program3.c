#include<stdio.h>

int CountTwo(int iNo)
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
        if(iDigit == 2)
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

   iRet = CountTwo(iValue);

   printf("The Number of two in %d are : %d",iValue,iRet);

    return 0;
}