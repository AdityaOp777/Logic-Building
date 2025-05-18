#include<stdio.h>

int MultiFact(int iNo)
{
    int iCnt = 0;
    int iMulti = 1;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMulti = iMulti * iCnt;
        }
    }
    return iMulti;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);

    printf("Multiplication Of Factors IS : %d ",iRet);

    return 0;
}