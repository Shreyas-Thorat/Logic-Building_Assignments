#include<stdio.h>
#include<stdbool.h>

bool Display(char ch)
{
    int iCnt = 0;
    bool bValue = true;

    for(iCnt = 0; iCnt <= 127; iCnt ++)
    {
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        {
            bValue = false;
        }
    }
    return bValue;

}

int main()
{

    char cValue = '\0';
    bool bRet = true;

    printf("Enter the Character : ");
    scanf("%c",&cValue);

    bRet = Display(cValue);

    if(bRet == true)
    {
        printf("It is A special Character\n");

    }
    else
    {
        printf("It is not a Special character\n");
    }




    return 0;
}