#include<stdio.h>

void DisplayAscii() // %x hexaDecimal Lowercase and %X for Uppercase, %o for Octal
{
    int iCnt = 0;

    printf("Decimal\tHex\tOctal\tChar\n");
    printf("\n");

    for(iCnt = 0; iCnt <= 127; iCnt++)
    {
        printf("%d\t%x\t%o\t%c",iCnt,iCnt,iCnt,iCnt);
        printf("\n");
    }


}

int main()
{

    DisplayAscii();
    return 0;
}
