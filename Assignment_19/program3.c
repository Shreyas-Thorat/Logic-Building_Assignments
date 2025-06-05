#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckEleven(int Arr[], int iLength)
{
    int iCnt = 0;
    bool bValue = false;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            bValue = true;
            break;
            
        }
       

    }

    return bValue;


}

int main()
{
    int *p = NULL, iSize = 0, iCnt = 0; 
    bool bRet = 0;

    printf("Enter the Length of the Array : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter the Elements in the array : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++ )
    {
        scanf("%d",&p[iCnt]);
    }

    bRet = CheckEleven(p,iSize);

    if (bRet == true)
    {
        printf("11 is present in the array\n");
    }
    else
    {
        printf("11 is not present in the array \n");
    }

    free(p);

    return 0;

}