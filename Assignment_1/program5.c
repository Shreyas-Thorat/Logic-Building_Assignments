#include<stdio.h>

void Accept(int iNo1)
{
    int iCnt = 0;

    for( iCnt = 1; iCnt <= iNo1; iCnt++)
    {
        printf("*");

    }
}

int main()
{

    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    return 0;
}