#include<stdio.h>

void Display(int iNo)
{
    // Write Updater
    while(iNo > 0 )
    {
        printf("*\n");
        iNo--;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}