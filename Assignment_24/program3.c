#include<stdio.h>

int Difference(char *str)
{

    int iCnt = 0,iCountCap = 0, iCountSmall;
    
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCap++;
            
        }
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCountSmall++;
            
        }
        *str++;

    }
    return iCountSmall - iCountCap;
}

int main()
{

    char Arr[100];
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^`\n`]s",Arr);

    iRet = Difference(Arr);

    printf("%d",iRet);

    return 0;

}