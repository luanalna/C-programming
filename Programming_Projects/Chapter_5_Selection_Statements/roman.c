#include <stdio.h>


int main()
{
    int a = 1230;

    printf("%d", a % 10);
    // printf("a = %d", a);
    // printf("a%%10 = %d", a%10);
    // printf("a/10 = %d", a/10);
    // printf("a = %d", a);
    
    a = a/10;
    printf("%d", a % 10);
    a = a/10;
    printf("%d", a % 10);
    // printf("\n");

    // printf("a = %d", a);
    // printf("a%%10 = %d", a%10);
    // printf("a/10 = %d", a/10);
    // printf("a = %d", a);

    return 0;
}
