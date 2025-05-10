#include<stdio.h>

void DisplayConvert(char CValue)
{
    if((CValue >= 'a') && (CValue <= 'z')  )
    {
        printf("%c\n", cValue - 32); 
    }
    else if((CValue >= 'A') && (CValue <= 'Z'))
    {
        printf("%c\n", CValue + 32);
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter Character : ");
    scanf("%c",&cValue
    );

    DisplayConvert(cValue);
    return 0;
}