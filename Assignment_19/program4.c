#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0;
    int iCount = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iCount = iCount +1;
        }
   
    }

    return iCount;


}

int main()
{
    int *p = NULL, iSize = 0, iCnt = 0; 
    int iRet = 0;

    printf("Enter the Length of the Array : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter the Elements in the array : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++ )
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequency(p,iSize);

   printf("The Frequency of 11 in the array is : %d",iRet);

    free(p);

    return 0;

}