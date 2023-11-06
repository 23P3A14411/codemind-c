#include<stdio.h>
int main()
{
    float CP,SP,LossPercentage,Loss;
    scanf("%f%f",&CP,&SP);
    Loss=CP-SP;
    LossPercentage=(Loss/CP)*100;
    printf("%.2f",LossPercentage);
}