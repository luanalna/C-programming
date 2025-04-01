#include <stdio.h>

int main(void)
{
    float income, amount_of_tax;
    amount_of_tax = 0;
    
    printf("Enter the amount of taxable income: $");
    scanf("%f", &income);

    if (income < 170 )
        amount_of_tax = 0.01 * income;
    else if (income > 170 && income < 2250)
        amount_of_tax = 0.02 * income;
    else if (2250 < income && income < 3750)
        amount_of_tax = 0.03 * income;
    else if (3750 < income && income < 5250)
        amount_of_tax = 0.04 * income;
    else if (income > 5250)
        amount_of_tax = 0.06 * income;

    printf("Commission: $%.2f\n", amount_of_tax);

    return 0;
}