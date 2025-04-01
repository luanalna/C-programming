#include <stdio.h>

int main(void)
{
    int i, j, k;
    //i = 2; j = 3 * 6 = 6 which is true (1)
    //k = i * j == 6;    ----- i 
    //printf("%d\n", k);

    //i = 5; j = 10; k = 1;
    //printf("%d", k > i < j); // thi order (k > i) < j gives 1 (true)

    // i = 3; j = 4; k = 1;
    // if((i < j) ==  (j < k))
    
    i = 3; j = 2; k = 4;
    int expr = i % j + i;
    if(expr <= k) // if(i % j + i <5)
    {
        printf("CORRECT\n");
    }
    else
    {
        printf("INCORRECT\n");
        printf("expr: %d\n", expr);
    }

    return 0;
}