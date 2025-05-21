/*
    2 4 6 8 10 
    1 3 5 7 9  
    2 4 6 8 10
    1 3 5 7 9                  
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iSum = 0;

    for(i = 1; i <= iRow; i++)
    {   
        if(i % 2 == 0)
        {
            iSum = 1;
        }
        else
        {
            iSum = 2;
        }

        for(j = 1; j <= iCol +1; j++)
        {
           printf("%d\t",iSum);
           iSum += 2;
          
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