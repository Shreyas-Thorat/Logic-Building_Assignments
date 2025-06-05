#include<stdio.h>

void Display(char ch)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt <= 127; iCnt ++)
    {
        if(ch >= 'A' && ch <= 'Z')
        {
            printf("%c",ch+32);
            break;
        }

        if(ch >= 'a' && ch <= 'z')
        {
            printf("%c",ch-32);
            break;
        }
        


        else
        {
            printf("%c\n",ch);
            break;
        }
    }

}

int main()
{

    char cValue = '\0';

    printf("Enter the Character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}