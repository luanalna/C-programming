#include <stdio.h>

int main (void)
{
    int number, i1, i2, i3;

    printf("Enter four-digit number: ");
    scanf("%d", &number);

    //Extract digits
    i1 = (number / 100) % 10;
    i2 = (number /10) % 10;
    i3 = number % 10;

    printf("The reversal is: %d%d%d\n", i3,i2,i1);

    return 0;

}

//enter a two digit number 28
//the reversal is 82