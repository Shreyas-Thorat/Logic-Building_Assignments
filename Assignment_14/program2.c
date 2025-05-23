#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0,k=0, l = 0;
    

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, k = 2, l = 1; j <= iCol; j++)
        {
            if(i % 2 != 0)
            {
                
                printf("%d\t",k);
                k = k+2;
            }
            else
            {   
                printf("%d\t",l);
                l = l + 2;
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