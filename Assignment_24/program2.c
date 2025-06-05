#include<stdio.h>

int CountSmall(char *str)
{

    int iCnt = 0,iCount = 0;
    
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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

    iRet = CountSmall(Arr);

    printf("%d",iRet);

    return 0;

}