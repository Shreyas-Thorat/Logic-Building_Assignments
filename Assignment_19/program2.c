#include<stdio.h>
#include<stdlib.h>

int FrequencyEven(int Arr[], int iLength)
{
    int iCnt = 0, iCountEven = 0, iCountOdd = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iCountEven = iCountEven + 1;
        }

        else
        {
            iCountOdd = iCountOdd + 1;
        }

    }

    return iCountEven - iCountOdd;

}

int main()
{
    int *p = NULL, iSize = 0, iCnt = 0, iRet = 0;

    printf("Enter the Length of the Array : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter the Elements in the array : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++ )
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = FrequencyEven(p,iSize);

    printf("The Difference of Even and Odd Numbers in the Array is : %d",iRet);

    free(p);

    return 0;

}