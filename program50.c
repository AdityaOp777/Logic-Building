#include<stdio.h>
#include<stdbool.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iSum1 = 0, iSum2 = 0, iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iSum1 = iSum1 + iDigit;
        }
        else
        {
            iSum2 = iSum2 + iDigit;
        }
        iDiff = iSum1 - iSum2;

        iNo = iNo / 10;

    }
    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("Difference Is : %d",iRet);

    return 0;
}