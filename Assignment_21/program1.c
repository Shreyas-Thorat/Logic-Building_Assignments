#include<stdio.h>
#include<stdlib.h>


int Maximum(int Arr[], int iLength)
{

    int iCnt = 0, iMax = 0;

    iMax = Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt ++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
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

    iRet = Maximum(p,iSize);

    printf("The Maximum element in  the Given array is : %d",iRet);
    
    free(p);
    
    return 0;


    
}