#include<stdio.h>

void StrCat(char *src, char *dest)
{
    while(*src != '\0')
    {
        src++;
    }
    while(*dest != '\0')
    {
        *src = *dest;
        src++;
        dest++;

    }

    *dest = '\0';
}

int main()
{

    char Arr[30] = "Marvellous Infosystems";
    char Brr[30] = "Logic Building";

    StrCat(Arr,Brr);

    printf("%s",Arr);

    return 0;
}