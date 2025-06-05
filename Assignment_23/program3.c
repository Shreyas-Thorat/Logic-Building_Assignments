#include<stdio.h>

void Display(char ch)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt <= 127; iCnt ++)
    {
        if(ch >= 'A' && ch <= 'Z')
        {
            while(ch <= 'Z')
            {
            printf("%c\t",ch);
            ch++;
            }
        }

        if(ch >= 'a' && ch <= 'z')
        {
            while(ch >= 'a')
            {
            printf("%c\t",ch);
            ch--;
            }
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