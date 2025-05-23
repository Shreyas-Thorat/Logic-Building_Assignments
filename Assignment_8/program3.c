#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iConvert = 0;

    iConvert = iNo * 1000;

    return iConvert;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number of Kilometer : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in Meter is : %d",iRet);


    return 0;
}