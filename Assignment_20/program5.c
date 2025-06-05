#include<stdio.h>
#include<stdlib.h>


int Product(int Arr[], int iLength)
{

    int iCnt = 0, iMul = 1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iMul = iMul * Arr[iCnt];
        }
    }

    return iMul;
}

int main()
{

    int *p = NULL, iSize = 0, iRet = 0, iCnt = 0;
    
    printf("Enter the Size of the array : ");
    scanf("%d",&iSize);

    p = (int * )malloc(iSize * sizeof(int));

    printf("Enter the Elements in the Array : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = Product(p,iSize);

    printf("The Product of the odd Elements of the array is : %d ",iRet);

    free(p);

    return 0;


}