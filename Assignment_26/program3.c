#include<stdio.h>

int Index(char str[], char ch)
{
   int iCnt = 0;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ch)
        {
            break;
        }
        iCnt++;
    }
    return iCnt;


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

    iRet = Index(Arr,cValue);

    printf("The First Occurence of %c in the Given String is : %d",cValue,iRet);

    return 0;


}