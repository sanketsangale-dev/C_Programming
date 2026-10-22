#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

int Check(int iNo)
{
    if((iNo % 5 ==0))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible 5\n");
    }
    else
    {
        printf("Not Divisible 5");
    }


    return EXIT_SUCCESS;
}