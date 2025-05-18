#include<stdio.h>

int DollarToINR(int iNo)
{
    int iDollar = 0;
    int iRupee = 0;

    iDollar = 70;

    iRupee = iDollar * iNo;

    return iRupee;


}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number of USD : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value In INR Is : %d ",iRet);

    return 0;
}