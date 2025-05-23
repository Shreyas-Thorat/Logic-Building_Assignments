#include<stdio.h>

int MultiplicationFactors(int iNo)
{

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iMult = 1;

    for(iCnt = 1; iCnt<iNo; iCnt++)
    {
        if((iNo)%(iCnt)==0)
        {
            iMult = iMult*iCnt;
        }
    }

    return iMult;
}

int main()
{

    int ivalue = 0;
    int iRet = 0;

    printf("Enter the Number : ");
    scanf("%d",&ivalue);

    iRet = MultiplicationFactors(ivalue);

    printf("The MUltiplication of factors is : %d",iRet);
}