#include<stdio.h>

int Frequency(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }
    return iCount;


}

int main()
{

    char Arr[100];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Character : ");
    scanf(" %c",&cValue);

    iRet = Frequency(Arr,cValue);

    printf("The frequency of %c in the Given String is : %d",cValue,iRet);

    return 0;


}