#include<stdio.h>

int KmToMeter(int iNo)
{
    int Meter = 0;

    Meter = 1000 * iNo;

    return Meter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance In Km : ");
    scanf("%d",&iValue);

    iRet = KmToMeter(iValue);

    printf("The Distance Is : %d Meters", iRet);

    return 0;
}