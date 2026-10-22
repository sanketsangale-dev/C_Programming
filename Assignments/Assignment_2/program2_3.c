#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}
int main()
{
    int ivalue = 0;

    printf("Enter number :");
    scanf("%d",&ivalue);

    Display(ivalue);

    return EXIT_SUCCESS;
}