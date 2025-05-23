#include<stdio.h>

double CircleArea(float fRadius)
{
   float fArea = 0;
   float PI = 3.14;

   fArea = PI * fRadius *fRadius;

    return fArea;

}

int main()
{
    float fValue = 0.0, dRet = 0;

    printf("Enter Radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("the Area of circle is  : %f",dRet);


    return 0;
}