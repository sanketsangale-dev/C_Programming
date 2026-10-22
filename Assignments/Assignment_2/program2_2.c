#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    while(iNo > 0)
    {
        printf(" * ");

        iNo--;

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