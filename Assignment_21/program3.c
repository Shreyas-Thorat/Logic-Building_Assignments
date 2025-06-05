#include<stdio.h>
#include<stdlib.h>


int DifferenceMaxMin(int Arr[], int iLength)
{

    int iCnt = 0, iMax = 0, iMin = 0;

    iMax = Arr[0];
    iMin = Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt ++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMax - iMin;
}

int main()
{

    int *p = NULL, iCnt = 0, iSize = 0, iRet = 0;

    printf("Enter the length of the array : ");
    scanf("%d",&iSize);

    p = (int * )malloc(iSize * sizeof(int));
    
    printf("Enter the elements in the array : \n");


    for(iCnt = 0; iCnt < iSize ; iCnt ++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = DifferenceMaxMin(p,iSize);

    printf("The Difference of maximum and minimum of the Given Array is : %d",iRet);
    
    free(p);
    
    return 0;


    
}