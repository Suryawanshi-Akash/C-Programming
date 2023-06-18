#include<stdio.h>
#include<stdlib.h>

#define ERR_NOTFOUND -1

int SearchFirstOccurance(int Arr[], int iLength, int iNo)
{
    int iCnt1 = 0;
    

    for(iCnt1 = 0; iCnt1<iLength; iCnt1++)
    {
        if(Arr[iCnt1] == iNo)
        {
            break;
        }
    }
    if (iCnt1 == iLength)
    {
        return ERR_NOTFOUND;
    }
    else
    {
        return iCnt1;
    }
    
}



int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt  = 0;
    int iValue = 0;
    int iRet = 0;

    printf("please enter the number of elements : \n");
    scanf("%d",&iSize);

    ptr  = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements :\n");

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the element that you want to search \n ");
    scanf("%d",&iValue);

    printf("The elements are : \n");

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    iRet = SearchFirstOccurance(ptr,iSize, iValue);

    if(iRet == ERR_NOTFOUND)
    {
        printf("There is no such element \n");
    }
    else 
    {
        printf("%d occured at index %d \n", iValue, iRet);
    }

    free(ptr);

    return 0;
}