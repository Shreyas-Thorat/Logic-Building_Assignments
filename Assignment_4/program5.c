#include<stdio.h>

int DiffFactNonFact(int iNo)
{
    if(iNo < 0 )
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;


    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo)%(iCnt) == 0)
        {
            iSumFact = iSumFact + iCnt;
            
        }
        else
        {
            iSumNonFact = iSumNonFact+iCnt;

        }
        
    }
    return iSumFact - iSumNonFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the value : ");
    scanf("%d",&iValue);

    iRet = DiffFactNonFact(iValue);

    printf("The Summation of non Factors is : %d",iRet);

    return 0;

}