#include<stdio.h>

void NonFact(int iNo)
{
    if(iNo < 0 )
    {
        iNo = -iNo;
    }

    int iCnt = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo)%(iCnt) == 0)
        {
            
        }
        else
        {
            printf("%d\t",iCnt);
        }
        
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the value : ");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;

}