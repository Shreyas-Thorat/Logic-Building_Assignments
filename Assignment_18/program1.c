#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iSumEven = 0,iCnt = 0;
    int iSumOdd = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        else if(Arr[iCnt] % 2 != 0)
        {
            iSumOdd = iSumOdd + Arr[iCnt];

        }
    }

    return iSumEven - iSumOdd;


}

int main()
{
    int iSize = 0;
    int iCnt = 0, iRet = 0;
    int *p =NULL;

    printf("Enter the total no of elements in the Array : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter the Elements of the array:\n");

    for(iCnt = 0;iCnt < iSize; iCnt ++)
    {
        scanf("%d",&p[iCnt]);
        
    }

    iRet = Difference(p,iSize);

    printf("The Result is : %d\n",iRet);

    free(p);


    




    return 0;
}
