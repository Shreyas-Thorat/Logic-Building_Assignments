#include<stdio.h>

void Pattern(int iRow , int iCol)
{

    int i = 0, j  = 0;

    for(i = 1; i <= iRow; i++)
    {
        for (j = iCol; j >= 1; j--)
        {
            if(j >= i)
            {
                printf("*\t");
            }
            else
            {
                break;
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of Rows and Columns : ");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}