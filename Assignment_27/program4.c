#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'a' && *src <= 'z')
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

    StrCpySmall(Arr,Brr);

    printf("%s",Brr);

    return 0;
}