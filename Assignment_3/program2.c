#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = - iNo;
    }

    for(iCnt = 1; iCnt <= iNo ; iCnt++ )
    {
        if((iNo) % (iCnt) == 0)
        {
            printf("%d\t",iCnt);
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the Number : ");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;

}