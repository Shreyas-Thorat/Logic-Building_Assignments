#include<stdio.h>

int IndexLast(char str[], char ch)
{
   int iCnt = 0,iCount = 0;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ch)
        {
           iCount++;
        }
        iCnt++;
        
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

    iRet = IndexLast(Arr,cValue);

    printf("The Last Occurence of %c in the Given String is at Index : %d",cValue,iRet);

    return 0;


}