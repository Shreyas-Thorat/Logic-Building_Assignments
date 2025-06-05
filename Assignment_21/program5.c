#include<stdio.h>
#include<stdlib.h>


void ThreeDigit(int Arr[], int iLength)
{

    int iCnt = 0, iSum = 0, iNo = 0, iDigit = 0;

   for(iCnt = 0; iCnt < iLength; iCnt++ )
   {
        iNo = Arr[iCnt];

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10;

            iSum = iSum + iDigit;

            
        }
        printf("%d\t",iSum);
        
        iSum = 0;
   }

  


}

int main()
{

    int *p = NULL, iCnt = 0, iSize = 0 ;

    printf("Enter the length of the array : ");
    scanf("%d",&iSize);

    p = (int * )malloc(iSize * sizeof(int));
    
    printf("Enter the elements in the array : \n");


    for(iCnt = 0; iCnt < iSize ; iCnt ++)
    {
        scanf("%d",&p[iCnt]);
    }
    printf("\n");

    ThreeDigit(p,iSize);

    
    
    free(p);
    
    return 0;


    
}