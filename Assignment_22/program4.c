#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char ch)
{
    bool bValue = false;

    if((ch >= 'a' && ch <= 'z'))
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

    bRet = CheckSmall(cValue);

    if(bRet == true)
    {
        printf("It is SmallCase\n");
    }

    else
    {
        printf("It is Not SmallCase\n");

    }
    return 0;
}   

