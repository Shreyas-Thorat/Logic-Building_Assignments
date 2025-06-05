#include<stdio.h>

void DisplayDigits(char *str)
{
    char *Original = str;
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c",*str);
               
        }
        str++;
    }
    

}

int main()
{

    char Arr[100];

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    DisplayDigits(Arr);

    return 0;
}