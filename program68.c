/*
    a b c d e
    1 2 3 4 5
    a b c d e
    1 2 3 4 5
    a b c d e
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iSum = 1;
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {   
        if(i % 2 != 0)
        {
            ch = 'a';
            for(j = 1; j <= iCol; j++)
            {
                printf("%c\t",ch++);
            }
        }
        else
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t",iSum++);
            }
            iSum = 1;
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