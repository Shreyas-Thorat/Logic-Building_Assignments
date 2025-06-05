#include<stdio.h>
#include<stdbool.h>

bool CheckAlpha(char ch)
{
    bool bValue = false;

    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
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

    bRet = CheckAlpha(cValue);

    if(bRet == true)
    {
        printf("It is a Aplhabet\n");
    }

    else
    {
        printf("It is not a Alphabet\n");

    }
    return 0;
}   

