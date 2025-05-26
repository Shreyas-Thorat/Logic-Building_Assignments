#include<stdio.h>

void Pattern(int iRow, int iCol)
{

    int i = 0, j = 0;
    
    for(i = 1; i <= iRow; i++)
    {
        for(j = iCol; j >= 1; j--)
        {
            if(i == j)
            {
                printf("#\t");

            }
            
            if(j > i)
            {
                printf("*\t");
            }
            
            if(i > j )
            {
                printf("@\t");
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