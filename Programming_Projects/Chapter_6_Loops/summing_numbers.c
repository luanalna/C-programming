#include <stdio.h>

int main(void)
{
    int n, sum = 0;

    printf("This program sums a series of integers\n");
    printf("Enter the series of integers\n: ");
    scanf("%d", &n);

    while (n != 0)
    {
        sum += n;
        scanf("%d", &n);
    }
    printf("The sum is: %d\n", sum);

    return 0;
    
}