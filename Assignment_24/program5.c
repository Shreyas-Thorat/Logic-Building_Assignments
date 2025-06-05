#include<stdio.h>

void ReverseString( char *str)
{

    char *cStart = NULL,*cEnd = NULL;

    char cTemp = '\0';

    cStart = str;
    cEnd = str; 

    while(*cEnd != '\0')
    {
        cEnd++;
    }
    cEnd--;

    while(cStart < cEnd)
    {
        cTemp = *cStart;
        *cStart = *cEnd;
        *cEnd = cTemp;

        cStart ++;
        cEnd --;
    }

    printf("Reversed String is : %s",str);

}

int main()
{

    char Arr[100];

    printf("Enter the String : \n");
    scanf("%[^`\n`]s",Arr);

    ReverseString(Arr);

    return 0;
}