#include<stdio.h>

void Toggle(char *str)
{

    char *cOriginal = str;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }

        else if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }

        str++;
    }

    printf("The Toggeled String is : %s\n",cOriginal);
}

int main()
{

    char Arr[100];

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    Toggle(Arr);

    return 0;
}