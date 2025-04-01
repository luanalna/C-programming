#include <stdio.h>

int main(void)
{
    float dollars_and_cents, money_taxed;
    dollars_and_cents = 0;

    printf("Enter amount: ");
    scanf("%f", &dollars_and_cents);

    money_taxed = dollars_and_cents + ((5.0f / 100.0f) * dollars_and_cents);

    printf("With tax added: %f\n", money_taxed);
    return 0;
}