#include<stdio.h>

double FhtoCs(float fTemp)
{
    double fConvert;

    fConvert  = (fTemp - 32) * (5.0/9.0);

    return fConvert;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter the value in Fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("The temperature in Celcius is : %f^C",dRet);

    return 0;


}