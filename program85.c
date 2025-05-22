/*
    1   2   3   4   5  
    1   2           5 
    1       3       5
    1           4   5
    1   2   3   4   5
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iSum = 0;

    for(i = 1; i <= iRow; i++)
    {
        iSum = 1;
        for(j = 1; j <= iCol; j++)
        {
            if((j == 1) || (j == iCol) || (i == 1) || (i == iRow) || (i == j))
            {
                printf("%d\t",iSum++);
            }
            else
            {
                printf("\t",iSum++);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Eneter Number Of Rows And Columns : ");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}