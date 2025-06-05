#include<stdio.h>

int CountCapital(char *str)
{

    int iCnt = 0,iCount = 0;
    
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCount++;
            
        }
        *str++;

    }
    return iCount;
}

int main()
{

    char Arr[100];
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^`\n`]s",Arr);

    iRet = CountCapital(Arr);

    printf("%d",iRet);

    return 0;

}