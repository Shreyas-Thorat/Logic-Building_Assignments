#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool CheckPresent(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iCount = 0;
    bool bValue = false;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bValue  = true ;
            break;
        }
        
        return bValue;
    }

    


}

int main()
{
    int *p = NULL, iSize = 0, iCnt = 0; 
    bool bRet = 0; 
    int iValue = 0;

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

    bRet = CheckPresent(p,iSize,iValue);

    if(bRet == true)
    {
        printf("%d is present in the Array \n",iValue);
    }

    else
    {
        printf("%d is not present in the Array \n",iValue);
    }
    free(p);

    return 0;

}