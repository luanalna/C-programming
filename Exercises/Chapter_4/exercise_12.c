#include <stdio.h>

int main(void)
{
    /*int i, j;
    i = 5;
    j = ++i *3 -2;
    printf("%d %d", i, j);

    return 0;*/

    /*int i, j;
    i = 5;
    j = 3 - 2 * i++;
    printf("%d %d", i, j);*/

    /*int i, j;
    i = 7;
    j = 3 * i-- + 2;
    printf("%d %d", i, j);*/

    int i, j;
    i = 7;
    j = 3 + --i * 2;
    printf("%d %d", i, j);
}