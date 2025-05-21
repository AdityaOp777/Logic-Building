/*
    1 2 3 4             11 12 13 14
    5 6 7 8             21 22 23 24
    9 1 2 3             31 32 33 34
    4 5 6 7             41 42 43 44
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iSum =  1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",iSum++);
        
            if(iSum > 9)
            {
                iSum = 1;
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