#include<stdio.h>
#include<stdlib.h>

void DivisibleByFiveAndThree(int Arr[],int iLength)
{

    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 5 == 0) && (Arr[iCnt] % 3 == 0))
        {
            printf("%d\t",Arr[iCnt]);
        }
    }

}

int main()
{

    int *p = NULL;
    int iCnt = 0, iSize = 0;

    printf("Enter the Total no of Elements : \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elaments in the array : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    DivisibleByFiveAndThree(p,iSize);

    free(p);


    return 0;

}