#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0,k=1;
    

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",k);  
            k++;
            
            if(k > 9)
            {
                k = 1;
            }
        }
        
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the values of row and column : ");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;

}