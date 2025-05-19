/*
    A B C D 
    a b c d
    A B C D 
    a b c d   
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 != 0)
            {
                printf("%c\t",j + 64);
            }
            if(i % 2 == 0)
            {
                printf("%c\t",j + 96);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows And Columns : ");
    scanf("%d \t %d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);
 
    return 0;
}