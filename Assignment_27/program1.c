#include<stdio.h>

void StrCpy(char *src, char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;

        src++;
        dest++;
    }
}

int main()
{

    char Arr[30] = "Marvellous Multi Os";
    char Brr[30];

    StrCpy(Arr,Brr);

    printf("%s",Brr);

    return 0;
}