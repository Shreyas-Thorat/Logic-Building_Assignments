#include<stdio.h>

void FactRev(int iNo)
{

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    

    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        if((iNo)%(iCnt)==0)
        {
            if((iNo)==(iCnt))
        {
            continue;

        }
            printf("%d\t",iCnt);
            
        }
    }

}

int main()
{

    int ivalue = 0;
   

    printf("Enter the Number : ");
    scanf("%d",&ivalue);

    FactRev(ivalue);

}