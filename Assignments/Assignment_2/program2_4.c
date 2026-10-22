#include<stdio.h>
#include<stdlib.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf(" %d ",iNo);
    }
}

int main()
{
    int ivalue = 0;
    int iCount = 0;

    printf("Enter number :");
    scanf("%d",&ivalue);

    printf("Enter frequency :");
    scanf("%d",&iCount);

    Display(ivalue, iCount);

    return EXIT_SUCCESS;
}