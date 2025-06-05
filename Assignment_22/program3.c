#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(char ch)
{
    bool bValue = false;

    if((ch >= '0' && ch <= '9'))
    {
        bValue = true;
    }

    return bValue;

}


int main()
{

    char cValue = '\0';
    bool bRet = false;

    printf("Enter the Character : ");
    scanf("%s",&cValue);

    bRet = CheckDigit(cValue);

    if(bRet == true)
    {
        printf("It is a Digit\n");
    }

    else
    {
        printf("It is Not A Digit\n");

    }
    return 0;
}   

