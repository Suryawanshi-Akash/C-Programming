#include<stdio.h>

void Display(int iNo)
{
    int iCnt =0;
    for(iCnt =iNo; iCnt>0; iCnt--)
    {
        printf("%d\t*\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iFrequency = 0;

    printf("Enter the Frequency of symbol : ");
    scanf("%d", &iFrequency);

    Display(iFrequency);
    return 0;
}