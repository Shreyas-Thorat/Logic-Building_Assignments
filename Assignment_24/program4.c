#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char *str)
{

    int iCnt = 0;
    bool bValue = false;
    
    while(*str != '\0')
    {
        if((*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U') || (*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') )
        {
            bValue = true;
          
        }
        *str++;

    }
    return bValue;
    
}

int main()
{

    char Arr[100];
    bool bRet = 0;

    printf("Enter the String : \n");
    scanf("%[^`\n`]s",Arr);

    bRet = CheckVowel(Arr);

    if(bRet == true)
    {
        printf("It containes vowel\n");

    }
    else
    {
        printf("It does not contain vowel in it\n");
    }

    

    return 0;

}