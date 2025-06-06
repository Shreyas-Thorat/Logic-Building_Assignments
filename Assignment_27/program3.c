#include<stdio.h>

void StrCpyCapital(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'A' && *src <= 'Z')
        {
            *dest = *src;
            dest++;
        }

        src++;
        
    }
}

int main()
{

    char Arr[30] = "Marvellous Multi Os";
    char Brr[30];

    StrCpyCapital(Arr,Brr);

    printf("%s",Brr);

    return 0;
}