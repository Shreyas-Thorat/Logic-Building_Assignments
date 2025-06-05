#include<stdio.h>
#include<stdlib.h>


void ThreeDigit(int Arr[], int iLength)
{

    int iCnt = 0, iCount = 0, iNo = 0;

   for(iCnt = 0; iCnt < iLength; iCnt++ )
   {
        iNo = Arr[iCnt];

        while(iNo != 0)
        {
            iNo = iNo / 10;
            iCount++;
        }

        if(iCount == 3)

        {
            printf("%d\t",Arr[iCnt]);
        }

        iCount = 0;
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