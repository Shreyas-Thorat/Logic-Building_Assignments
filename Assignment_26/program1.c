#include<stdio.h>
#include<stdbool.h>

bool CheckChar(char *str, char ch)
{
    bool bValue = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bValue = true;            
        }
        str++;
    }

    return bValue;



}

int main()
{
    char Arr[100];
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Character to Search : \n");
    scanf(" %c",&cValue);

    bRet = CheckChar(Arr,cValue);

    if(bRet == true)
    {
        printf("%c found in the String\n",cValue);
    }
    else
    {
        printf("%c not found in the String \n",cValue);
    }

    return 0;


}