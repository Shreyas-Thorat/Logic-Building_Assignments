#include<stdio.h>

int DollarToINR(int iNo)
{
    int iConvert = 0;

    iConvert = iNo * 70;

    return iConvert;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number of USD : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is : %d",iRet);


    return 0;
}