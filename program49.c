#include<stdio.h>
#include<stdbool.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            iDigit = 0 + iMult;
        }
        iMult = iMult * iDigit;
        
        iNo = iNo / 10;
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("Multiplication Is : %d",iRet);

    return 0;
}