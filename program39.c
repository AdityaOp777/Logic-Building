#include<stdio.h>

double FhToCelcius(float fNo)
{
    float Celcius = 0.0f;

    Celcius = (fNo - 32) * (5.0/9.0);

    return Celcius;

}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Temp In Fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhToCelcius(fValue);

    printf("The Temp Is : %f",dRet);

    return 0;
}