#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE -1

int Check(int iNo1)
{
    if((iNo1 % 5) == 0)
    {
        return TRUE;
    }

    else 
    {
        return FALSE;
    }
    return 0;
}

int main()
{

    int iValue = 0;

    BOOL bRet = FALSE;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not divisible by 5");
    }

    return 0;

}