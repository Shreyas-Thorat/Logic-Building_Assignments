#include<stdio.h>
#include<stdlib.h>


int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iIndex = 0;
    

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iIndex = iCnt;
            
        }
        
        
    }


    return iIndex;


}

int main()
{
    int *p = NULL, iSize = 0, iCnt = 0; 
    int iRet = 0; 
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

    iRet = LastOcc(p,iSize,iValue);

    if(iRet == iSize)
    {
        printf("No such Element in the Array\n");
    }
    else
    {
        printf("Last Occurence of the number is at %d\n",iRet);
    }

    
    free(p);

    return 0;

}