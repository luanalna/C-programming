#include <stdio.h>

int main(void)
{

    int item_number, day, month, year;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_number);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter purchase date: ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("Item\tUnit\tPurchase\nNumber\tPrice\tDate\n%d\t%.3f\t%d/%d/%d\n", item_number, unit_price, day, month, year);

    return 0;

}