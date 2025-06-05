#include<stdio.h>

void Lowercase(char *str)
{
    char *Original = str;
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;   
        }
        str++;
    }
    printf("The string Converted to Lowercase is : %s",Original);

}

int main()
{

    char Arr[100];

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    Lowercase(Arr);

    return 0;
}