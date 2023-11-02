#include<stdio.h>
int main()
{
    float basic,DA,HRA,Gross;
    scanf("%f",&basic);
    if(basic<=10000)
    {
        DA=basic*0.8;
        HRA=basic*0.2;
    }
    else if(basic<=20000)
    {
        DA=basic*0.9;
        HRA=basic*0.25;
    }
    else
    {
        DA=basic*0.95;
        HRA=basic*0.30;
    }
    Gross=basic+DA+HRA;
    {
        printf("%.2f",Gross);
    }
}