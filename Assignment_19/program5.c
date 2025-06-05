#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CheckFrequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount = iCount +1;
        }
   
    }

    return iCount;


}

int main()
{
    int *p = NULL, iSize = 0, iCnt = 0; 
    int iRet = 0, iValue = 0;

    printf("Enter the Length of the Array : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter the Element to Find in the Array : \n");
    scanf("%d",&iValue);

    printf("Enter the Elements in the array : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++ )
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = CheckFrequency(p,iSize,iValue);

   printf("The Frequency of %d in the array is : %d",iValue,iRet);

    free(p);

    return 0;

}