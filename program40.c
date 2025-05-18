#include<stdio.h>

double SquareMeter(int iNo)
{
    float fSqMeter = 0.0f;

    fSqMeter = 0.0929 * iNo;

    return fSqMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Area in sq.feet : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("The Sq.Meter Is : %f ",dRet);

    return 0;
}