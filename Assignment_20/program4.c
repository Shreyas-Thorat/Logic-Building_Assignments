#include<stdio.h>
#include<stdlib.h>


void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;
    

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd ))
        {
            printf("%d\t",Arr[iCnt]);
        }
        
        
        
    }

}

int main()
{
    int *p = NULL, iSize = 0, iCnt = 0; 
    int iRet = 0; 
    int iFirst = 0;
    int iLast = 0;

    printf("Enter the Length of the Array : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Start : ");
    scanf("%d",&iFirst);

    printf("End : ");
    scanf("%d",&iLast);

    

    printf("Enter the Elements in the array : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++ )
    {
        scanf("%d",&p[iCnt]);
    }

    Range(p,iSize,iFirst,iLast);

    
    free(p);

    return 0;

}