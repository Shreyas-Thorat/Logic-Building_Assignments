#include<stdio.h>

void StrNCpy(char *src, char *dest,int iCnt)
{
    while((*src != '\0') && (iCnt != 0))
    {
        *dest = *src;

        src++;
        dest++;
        iCnt--;
    }
}

int main()
{

    char Arr[30] = "Marvellous Multi Os";
    char Brr[30];

    StrNCpy(Arr,Brr,12);

    printf("%s",Brr);

    return 0;
}