#include<stdio.h>

int SumNonFact(int iNo)
{
    if(iNo < 0 )
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo)%(iCnt) == 0)
        {
            
        }
        else
        {
            iSum = iSum+iCnt;

        }
        
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the value : ");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("The Summation of non Factoral is : %d",iRet);

    return 0;

}