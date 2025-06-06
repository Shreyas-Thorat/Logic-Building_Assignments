#include<stdio.h>

void StringRev(char *str)
{
    char *cStart = NULL, *cEnd = NULL;
    char cTemporary = '\0';

    cStart = str;
    cEnd = str;

    while(*cEnd != '\0')
    {
        cEnd++;
    }
    cEnd--;

    while(cStart < cEnd)
    {
        cTemporary = *cStart;
        *cStart = *cEnd;
        *cEnd = cTemporary;

        cStart++;
        cEnd--;
    }

    printf("Reversed String is : %s\n",str);

}

int main()
{

    char Arr[20];


    printf("Enter the String to Reverse : \n");
    scanf("%[^'\n']s",Arr);

    StringRev(Arr);

    

    return 0;
}