#include<stdio.h>

void DisplayDigit(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iDigit = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iDigit == 0)
        {
            printf("It contains Zero\n");
            break;
        }
        else
        {
            printf("There is no zero.");
            break;
        }
        
    }
   
}

int main()
{

    int iValue  = 0;

    printf("Enter the value : ");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}