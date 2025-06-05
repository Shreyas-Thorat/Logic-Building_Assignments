#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
    bool bValue = false;

    if((ch >= 'A' && ch <= 'Z'))
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

    bRet = CheckCapital(cValue);

    if(bRet == true)
    {
        printf("It is Capital\n");
    }

    else
    {
        printf("It is Smaller\n");

    }
    return 0;
}   

