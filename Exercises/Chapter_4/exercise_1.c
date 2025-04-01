#include <stdio.h>

int main(void)
{
    int j, i, k;
    i = 2; 
    j = 2;
    k = 1;
    //printf("%d %d\n", i / j, i % j);
    // printf("%d", i % j);
    //printf("%d", ((i+10) % k) / j);
    printf("%d", (i + 5) % (j + 1) / k);
    
    //for (size_t i = 3; i <= 10; i++)
    //{
    //printf("i = %d, j = %d, i redmdiv j = %d, div = %d\n", (int)i, j, (int)(i % j), (int)i/j );
    // }
     

    return 0;
}