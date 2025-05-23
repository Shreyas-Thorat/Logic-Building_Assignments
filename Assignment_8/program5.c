#include<stdio.h>

double SquareMeter(float fValue)
{
    double fConvert;

    fConvert  = fValue * 0.0929;

    return fConvert;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter the value in Square Feet : ");
    scanf("%f",&fValue);

    dRet = SquareMeter(fValue);

    printf("The Value in Square Meter is  : %f",dRet);

    return 0;


}