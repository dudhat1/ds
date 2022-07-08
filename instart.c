#include <stdio.h>
float power(float base, float num)
{
    float ans = 1;
    for (int i = 0; i < num; i++)
    {
        ans = ans * base;
    }
    return ans;
}
void Compound_Intereset(float Principle, float Rate, float Time)
{
    float p, CI;

    p = 1 + (Rate / 100);
    CI = Principle * (power(p, Time));
    printf("Compound Interest = %.2f\n", CI);
}
int main()
{
    float Principle, Rate, Time;

    printf("Enter Principle : ");
    scanf("%f", &Principle);

    printf("Enter Rate : ");
    scanf("%f", &Rate);

    printf("Enter Time : ");
    scanf("%f", &Time);

    Compound_Intereset(Principle, Rate, Time);

    return 0;
}